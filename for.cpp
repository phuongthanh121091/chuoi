//comment dong
/* comment theo khoi*/
/* Vong For
Có 4 biến thể của vòng For
1. for (giá trị khởi tạo; điều khiện để tiếp tục;số bước nhảy) lẹnh;
2. while (dieu kien de tiep tuc) lenh
3. do lenh while (dieu kien de tiep tuc)
*/
#include <iostream>
int main()
{
    for(int i= 0; i< 10; i=i+1)
    {
        std::cout<< "hello,"<<i<<"\n";
    }
    
    int ii= 0;
    while (ii < 10)
    {
        std::cout << "lenh nay chay trong vong while"<<ii<<"\n";
        ii = ii + 1;
    }

    int iii = 0;
    do 
    {
        std::cout <<"lenh nay chay trong vong do while"<<iii<<"\n";
        iii = iii + 1;
    }
    while (iii < 10);

	return 0;
}