
#include <iostream>
std::istream& func(std::istream& instr);
int main()
{
    func(std::cin);
}

std::istream& func(std::istream& instr)
{   
    std::string ss;
    while(instr >> ss, !instr.eof())
    {
        std::cout << ss <<std::endl; 
    }
    instr.clear();
    return instr;   
    
}
