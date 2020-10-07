
/*Bài 2: Nhập vào số nguyên dương a. Tính tổng các chữ số chẵn của a.
VD: a = 213489 -> kq = 2+4+8 = 14*/


#include <iostream>
#include <cmath>
int main ()
{
    int a = 0;
    float Ket_Qua = 0;
    int b[100];
    std::cout<<"Nhap vao so a: ";
    std::cin>> a;
    for (int i = 0; a != 0; i++)
    {
        b[i] = a%10;
        a = a/10;
        if (b[i]%2 == 0 )
        {
            Ket_Qua = Ket_Qua + b[i];
        }
    }
    std::cout<< "Tong cua cac so chan la: "<< Ket_Qua;
    return 0;
}