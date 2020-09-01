#include <iostream>
#include <string>

int main()
{
    int a[100]; // Khai bao mang a co 100 phan tu
    a[0] = 1; // Gan gia tri 1 cho phan tu thu 0 cua mang a
    int b = a[1]; // Lay gia tri phan tu thu 1 cua mang a gan cho b

    std::string name;
    std::cout << "Nhap vao ten cua ban: ";
    std::getline(std::cin, name);   // Lay het toan bo dong nhap tu cin vao trong chuoi name
    std::cout << name << std::endl;

    std::cout << name[2];

    /*
        Nhap vao ten cua ban nam
        Nhap vao ten cua ban nu
        22111
        4333
        777
        1414
        525
        710
        87

        Nguyen Thi Phuong Thanh Loves Cao Duc Trong
        14121
        5232
        787
        1514
        625
        811
        99
    */
    return 0;
}