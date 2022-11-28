#include <iostream>
using namespace std;

// demo of return statement
double cube(double num)
{
    return num * num * num;
}

int main()
{
    {
        cout << cube(5.0);
        return 0;
    }
}

// example 1

// this function returns an int
int get_number()
{
    return 20;
}

int main()
{
    // here we use the function and store the return value into our variable “number”
    int number = get_number();
    std::cout << number << std::endl;
}