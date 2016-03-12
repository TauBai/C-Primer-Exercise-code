#include <iostream>
using namespace std;


int main()
{
    int a = 1, b = 32;
void exchange_p(int *ip1 ,int *ip2);
void exchange_r(int &a , int &b);
    exchange_p ( &a , &b);
    cout << "a = " << a << endl
         << "b = " << b << endl;    
    exchange_r( a , b);
    cout << "a = " << a << endl
         << "b = " << b << endl;   
}
void exchange_p(int *ip1 ,int *ip2)
{
    auto c = *ip1;
    *ip1 = *ip2;
    *ip2 = c ;
}
void exchange_r(int &a , int &b)
{
    auto c = a;
    a = b;
    b = c;
}
