#include <iostream>
int main()
{
    int i , j,d;
    double slope = static_cast<double>(j) / i;
    void* p= &d;
    double *dp = static_cast<double*>(p);
    const char *pc;
    char    *p = const_cast <char*> (pc);
    const char *cp;
    char    *q = static_cast<char*> (cp);//error
                 static_cast<string>(cp);
                  const_cast<string>(cp);

}
