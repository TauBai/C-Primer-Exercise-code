/*
--------------------------------------------------------
   what is the difference between typename and class?
--------------------------------------------------------
http://stackoverflow.com/questions/2023977/c-difference-of-keywords-typename-and-class-in-templates

http://stackoverflow.com/questions/5307036/what-is-difference-between-template-typename-t-and-template-class-t-for-me

http://stackoverflow.com/questions/4534313/what-is-the-difference-between-template-class-t-and-template-typename-t
 */


#include <iostream>

template <class T>
T getAndPrint(T& v){
    std::cout << v << std::endl;
    return v;
}

int main()
{
    int i = 3;
    getAndPrint(i);
}
