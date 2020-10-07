/*Bài 4: Nhập vào mảng a. Kiểm tra mảng a có tăng dần hay không
VD: 2, 5, 6, 8, 9, 12, 22, 24 là mảng tăng dần*/



#include <iostream>
#include <cmath>
int main ()
{
    int a = 0;
    int b[100];
    int n = 0;
    std::cout<<"Nhap vao so a: ";
    std::cin>> a;
    for (int i = 0; a != 0; i++)
    {
        b[i] = a%10;
        a = a/10;
        n++;
    }
    for (int i = 0; i< n -1; i++)
    {
        //std::cout<<b[i];
        if ( b[i] < b[i + 1])
        {
            std::cout<<"Chuoi khong tang dan.";
            return 0;
        }
    }
    std::cout<<"Chuoi tang dan";
    return 0;
}