#include <iostream>

int main()
{
//    using std::cout;
//    using std::endl;
//    using std::string;
  //  using std::cin;
    //string result;
//    string::size_type n;
    using namespace std;
    string result;
    string num;

        cout << "Please a series number , hit enter to separate \n"
             << "using '\0' or ctrl+d to end and show the result"
             << endl;
    while(cin >> num )                           //
   	{
         for (auto c : num)
            if (isdigit(c))
                result += c;  
         result +=", " ;
        }

    cout << "The result is " << result << endl;



}
