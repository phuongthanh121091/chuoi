/*Bài 3: Nhập vào số nguyên dương a. Kiểu tra số đó có phải là số đối xứng
VD: 1, 2, 3, 11, 121, 4994, ... là số đối xứng*/



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
    for (int i = 0, j = n-1; i<=j; i++, j--)
    {
        if ( b[i] != b[j])
        {
            std::cout<<"Chuoi khong doi xung.";
            return 0;
        }
    }
    std::cout<<"Chuoi doi xung";
    return 0;
}
