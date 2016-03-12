#include <iostream>
#include <vector>

int main()
{
    using namespace std;
    int *ptr;
    vector<int> vec{1,2,3,4,5,6,7,8};
    int ival = 1;

    cout <<( ptr !=0 && *ptr++ )<<endl;
    cout <<( ival++ && ival )<< endl;
    cout <<( vec[ival++] <= vec[ival] )<< endl;



    vector<string>::iterator iter;
    cout << *iter++ << endl;
    cout << ((*iter)++) << endl;
    cout << (*iter).empty() << endl;
    iter-> empty();
    cout << ++*iter << endl;
    iter++ -> empty();	
}
