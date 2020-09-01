#include <iostream>
#include <cmath>

int tinhlode(int a, int b)
{
    return a + b;
}
 
bool kiemtrachuoitangdan(int a)
{
    int b[100];
    int n = 0;
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
            //std::cout<<"Chuoi khong tang dan.";
            return false;
        }
    }
    //std::cout<<"Chuoi tang dan";
    return true;
}

int main()
{
    //int kq1 = 4 + 5 + 1;
    int kq1 = tinhlode(4, 5);

    //int kq2 = 7 + 3 + 1;
    int kq2 = tinhlode(7, 3);

    bool kq3 = kiemtrachuoitangdan(342);
    bool kq4 = kiemtrachuoitangdan();

    return 0;
}