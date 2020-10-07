#include <iostream>
#include <cmath>
int main ()
{
    float Toan = 0;
    float Ly = 0;
    float Hoa = 0;
    float Tong = 0;
    {
        std::cout<<"Hay nhap diem Toan:";
        std::cin>>Toan;
        std::cout<<"Hay nhap diem Ly:";
        std::cin>>Ly;
        std::cout<<"Hay nhap diem Hoa:";
        std::cin>>Hoa;
        Tong = (Toan + Ly + Hoa)/3;
        if (Toan >= 8 && Ly >= 8 && Hoa >=8)
        {
            std::cout<<"Hoc sinh xep loai Gioi";
        }
        else if (Toan >= 5 && Ly >= 5 && Hoa >= 5 && Tong >= 6.5)
        {
            std::cout<<"Hoc sinh xep loai Kha";
        }
        else
        {
            std::cout<<"Hoc sinh xep loai Trung Binh";
        }
        return 0;
    }
    
}