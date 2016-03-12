#include <iostream>
#include <vector>
int main()
{
    using namespace std;
    vector<int> v(10,0);
    for(auto it = v.begin();it != v.end(); ++it)
        {
            *it = it - v.begin() + 1 ;
        }
    for (auto i : v)
        cout << i << " " ;
    cout << endl;
    auto text = v;
    for (auto it = text.cbegin(); it != text.cend(); ++it)
        {
            cout << *it <<" ";
        }
    cout << endl;

    auto beg = text.begin() , end = text.end();
    auto mid = text.begin() + (end - beg)/2 ;  

    while (mid != end &&)



}
