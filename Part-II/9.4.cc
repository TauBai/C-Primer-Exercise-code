#include <iostream>
#include <vector>

bool find_int(std::vector<int> a , int b)
{
    
    for (auto it = a.begin() ; it != a.end(); ++it)
    {
        if ((*it) == b )
            return true;
    }
    return false;
}


