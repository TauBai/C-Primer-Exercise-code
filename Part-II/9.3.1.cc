#include <iostream>
#include <string>
#include <deque>
#include <list>
#include <vector>

int main()
{

//manage iostate
    auto oldState = std::cin.rdstate();
    std::cin.clear();
//////////////////////////////////////////////// 
    std::string ss;
    std::cin >> ss;

    std::deque<char> dchar;
//insert
    dchar.insert(dchar.begin(),ss.begin(),ss.end());
    for(auto a : dchar)
        std::cout << a;
    std::cout << std::endl;


//assign
    std::list<char> lchar;
    lchar.assign(dchar.begin(),dchar.end());

    for(auto a : lchar)
        std::cout << a;
    std::cout << std::endl;


//9.20
    std::list<int> lnum ={1,2,3,4,5,6,7,8,9,0};
    std::deque<int> odd, even;
    for(auto a : lnum)
        if(a % 2 == 0)
            even.push_back(a);
        else
            odd.push_back(a);

    std::cout << "odd deque has ";
    for(auto a : odd)
        std::cout << a;
    std::cout << std::endl;
    std::cout << "even deque has ";
    for(auto a : even)
        std::cout << a;
    std::cout << std::endl;

//insert 
    std::list<std::string> lst;
    auto iter = lst.begin();
    std::string word;
//////////
    std::cin.clear();
//////////
    while(std::cin >> word)
        iter = lst.insert(iter, word) ;
    for(auto a : lst)
        std::cout << a << std::endl;
//insert to the vector's front 
    std::string anotherword;
    std::vector<std::string> vstr;
    auto it = vstr.begin();
/////////
    std::cin.clear();
/////////
    while(std::cin >> anotherword)
        it = vstr.insert(it, anotherword) ;
    for(auto a : vstr)
        std::cout << a << std::endl;

// vetor
    int some_val = 25;
    std::vector<int> iv = {1,2,32,23,25,123,1,24,5,4,43,6,56};
    std::vector<int>::iterator itiv = iv.begin();// mid = iv.begin()+iv.size()/2;
    while(itiv != iv.begin()+iv.size()/2){
        if(*itiv == some_val)
            itiv = iv.insert(itiv,2*some_val) + 2; // point to the new
        else
            ++itiv;
    }


////////////////////////////////////////////////
    std::cin.setstate(oldState);
////////////////////////////////////////////////
    return 0;
}
