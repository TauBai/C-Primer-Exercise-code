#include <iostream>
int main()
{
    const int ci = 42;
    int i = ci;
    int * const p =&i;
    *p = 0;
    const int *p1 = &i;
    *p = 422;
    p = 0;
    const int &r = i;
    i += ci;


}
