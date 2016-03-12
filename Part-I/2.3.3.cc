#include <iostream>
int main()
{
    int i = 42;
    int *pi =0;
    int *pi2 = &i;
    int *pi3;
    pi3 = pi2;
 //   pi2 = 0;
std::cout << " i = " << i << std::endl;
std::cout << " *pi3 = " << *pi3 << std::endl;
std::cout << " *pi2 = " << *pi2 << std::endl;
    int ival =400;
    pi =&ival;
    *pi = 0;
std::cout << " ival = " << ival << std::endl;
}
