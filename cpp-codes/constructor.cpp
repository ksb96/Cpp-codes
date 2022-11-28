// constructor
#include <iostream>
class demo
{
    // initialize part
    int a, b;

public:
    // constructor + logic part & value assign
    demo()
    {
        a = 5;
        b = 10;
        std::cout << a << b << '\n';
    }
};
int main()
{
    // call block
    demo obj; // obj created and called
    return 0;
}