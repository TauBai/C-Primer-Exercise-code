#include <iostream>

int main()
{
    using namespace std;
    string s("some string");
    if (s.begin() != s.end() )
        {

             auto it = s.begin();
             *it = toupper(*it);



        }

    cout << s << endl;
}
