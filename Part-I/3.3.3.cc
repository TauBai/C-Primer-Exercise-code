#include <iostream>
#include <vector>
int main()
{
    using namespace std;
    vector<int> v{1,2,3,4,5,6,7,8,9};
    for (auto &i : v)
        i *=i;
    for (auto i : v)
        cout << i << " " ;
    cout << endl;


    v.push_back(250);
    cout << v[9]         << endl;
    cout << v.empty() << endl;
    cout << v.size()  << endl;
    vector<int>::size_type a;


    vector<unsigned> scores(11,0);
    unsigned grade;
    while (cin >> grade)      //when grade is not an int, break
    {
        if (grade <= 100)              
            ++scores[grade/10];
    }



    for (unsigned i : scores)
        cout << i << " ";
    cout << endl;


}
