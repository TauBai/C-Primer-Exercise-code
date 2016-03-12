#include <iostream>
#include <vector>
int main()
{
    using namespace std;
    vector<int> grade;
    int a ;
    while (cin >> a)
        {
             if (0 <= a && a <= 100)     
                 grade.push_back(a);
        }
    for (auto a : grade)
             cout << a << " ";

    cout << endl;
    int highpass = 0, pass = 0 , lowpass =0 ,fail=0;
    for (auto a : grade)
        a > 90 ? ++highpass : (a >= 60 && 75 > a) ? ++lowpass : 
        a >= 60 ? ++pass : ++fail ;
    pass += highpass + lowpass ;
    cout << "The number of higpass is " << highpass << endl;
    cout << "lowpass is " << lowpass << endl;
    cout << pass << " students are passed" << endl;
    cout << fail << " students are failed" << endl;



}
