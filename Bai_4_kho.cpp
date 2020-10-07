/*Bài 4: Nhập vào mảng a. Kiểm tra mảng a có tăng dần hay không
VD: 2, 5, 6, 8, 9, 12, 22, 24 là mảng tăng dần*/



#include <iostream>
#include <cmath>
int main ()
{
     int n = 0;
    std::cout << "Nhan vao n: ";
    std::cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        std::cout<<"Nhap vao a["<<i<<"]: ";
        std::cin>>a[i];
    }

    for (int i = 0; i< n -1; i++)
    {
        //std::cout<<b[i];
        if ( a[i] > a[i + 1])
        {
            std::cout<<"Chuoi khong tang dan.";
            return 0;
        }
    }
    std::cout<<"Chuoi tang dan";
    return 0;
}