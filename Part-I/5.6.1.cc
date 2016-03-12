#include <iostream>
int main()
{
    while (cin >> item1 >> item2)
    {
        try
            {
             
            }
        catch (runtime_error err)
            {
            cout << err.what()
                 << "\nTry Again? Enter y or n" << endl;
            char c;
            cin >> c;
            if (!cin || c == 'n')
                break;


            }



    }

}
