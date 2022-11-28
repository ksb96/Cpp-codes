// Grouping of similar items as one
#include <iostream>
using namespace MyName
{
    int x;
}

using namespace MySecondName
{
    int x;
}

int main()
{
    MyName::x = 1222;
    MySecondName::x = 34554;
    std::cout << "1st X value : " << MyName::x << "2nd x value : " << MySecondName::x << '\n';
}