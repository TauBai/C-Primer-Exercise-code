#include <iostream>
#include <vector>
int main()
{
    using namespace std;
    vector<int> grade;
    int input;
    while( cin >> input )
        if (100 >=input && input >=0)
            grade.push_back(input);
    const vector<string> lettergrade{"F","D","C","B","A","A++"};
    for (auto a : grade)
        if (a < 60)
            cout << lettergrade[0] <<endl;
        else if( a%10 > 7)
            cout << lettergrade[(a-50)/10] + "+" << endl;
             else if( a%10 < 3)
                 cout << lettergrade[(a-50)/10] + "-" << endl;
                  else cout << lettergrade[(a-50)/10] << endl;

}
