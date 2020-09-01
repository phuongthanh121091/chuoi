#include <iostream>

void nhap(int*& a, int& n)
{
    std::cout << "Nhan vao n: ";
    std::cin>>n;
    a = new int[n];
    for (int i = 0; i < n; i++)
    {
        std::cout<<"a["<<i<<"]: ";
        std::cin>>a[i];
    }
}

void inra(int* a, int n)
{
    std::cout <<"Ban da nhap vao mang a la:"<<std::endl;
    for (int i = 0; i < n; i++)
    {
        std::cout<<"a["<<i<<"]: "<<a[i]<<std::endl;
    }
}

int tinhtong(int* a, int n)
{
    int tong = 0;
    for (int i = 0; i < n; i++)
    {
        tong += a[i];
    }
    return tong;
}

int main()
{
    int* a = nullptr;
    int n = 0;
    nhap(a, n);
    inra(a, n);
    int tong = tinhtong(a, n);
    std::cout <<"Tong gia tri la: "<<tong;
    delete [] a;
}
    
    