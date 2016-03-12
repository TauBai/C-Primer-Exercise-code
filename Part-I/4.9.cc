#include <iostream>
#include <vector>
int main()
{
    using namespace std;
    int x[10] = {0,0,0 ,0,0,0,0,0,0,0};
    int *p = x;
    cout << sizeof(x)/sizeof(*x) << endl;
    cout << sizeof(p)/sizeof(*p) << endl;
}
