#include <iostream>
#include <vector>
using namespace std;
void cout_vector(const vector<string> v);
int main()
{
    vector<string> s{"Hello ", ", ", " World!"} ;
    //auto mid = s.begin();
    //if (mid != s.end())
    //    cout << mid ++    ;     
   cout_vector(	s	);
    cout << " Nonsense";

}

void cout_vector(const vector<string> v)
{
    if(!v.empty())
    for (auto i :v)
        cout << i ;
}
