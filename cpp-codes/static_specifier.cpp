#include <iostream>
void function()
{
    static int x = 5;
    x++; // increment
    std::cout << "Value of x: " << x << '\n';
}
int main()
{
    function(); // 6
    function(); // 7
}