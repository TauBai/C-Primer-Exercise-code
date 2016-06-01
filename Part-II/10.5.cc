#include<iostream>
#include<algorithm>

int main()
{
    char a[] = "hello world!";
    char b[] = "hello world";
    std::cout << std::find(std::begin(a), std::end(a), 'l') << std::endl;
    std::cout << std::equal(std::begin(a), std::end(a), std::begin(b) ) << std::endl;
}
