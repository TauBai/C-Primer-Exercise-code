#include <iostream>
#include <vector>

int main()
{
    using namespace std;
    vector<int> v{1,2,3,4,5,6,7,8,9,0};
    for (auto &a : v)
        a = (a % 2 ) ? (a*2) : a;
    for (auto a : v)
        cout << a << endl;
}
