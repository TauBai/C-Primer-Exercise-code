#include <iostream>
int main()
{
    using namespace std;
    string s1 = "hello", s2= "world" ;
    string s3 = s1 + "," + s2 + '\n';
    cout << s3 << endl;
    string str("some thing");
//    for (auto c :str)
//        cout << c << endl;
    string s4;
//    for (auto s : s3)       
    for (int s : s3)
//          cout << s <<endl;
        s4 += 'X';
    cout << s4 <<endl;

//    string s5;
//    cout << s5[0] << endl;
    cout << s3 << endl;
    string s6;
    for (int s : s3)
        if (!ispunct(s))
            s6 += s;
    cout << s6 << endl;


//    const string s = "Keep out!";
    string s = "Keep out!";
    for (auto &c : s)
        {
         c = '1';       
        }
    cout << "Now s become " << s << endl;


}
