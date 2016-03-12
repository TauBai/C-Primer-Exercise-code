#include <iostream>
using namespace std;
int main()
{
    
    bool isShorter(const string &s1 , const string &s2);
    string::size_type find_char(const string &s, char c, 
                             string::size_type &occurs);
    void reset (string &s);


    string s1(10,'0') , s2(9,'0');
    cout << isShorter(s1,s2) << endl;
//    string::size_type occurs ;
    decltype(s1.size()) occurs = 1;
    cout << find_char(s1,'0',occurs) << ", "
         << occurs                   << endl
         << s1.size() << endl;
    reset(s1);
    find_char(s1,'0',occurs) ;
    cout << find_char(s1,'0',occurs) << ", "
         << occurs                   << endl
         << s1.size() << endl;

}


bool isShorter(const string &s1 , const string &s2)
{
    return s1.size() < s2.size();
}

string::size_type find_char(const string &s, char c, 
                             string::size_type &occurs)
{
    auto ret = s.size();
    occurs = 0;
    for (decltype(ret) i=0;  i != s.size() ; ++i)
        {
            if(s[i] == c)
                {
                    if (ret == s.size())
                        ret = i;
                    ++occurs;
                }
        }
    return ret;
}

void reset (string &s)
{
    s = "";
}
