#include <iostream>
#include <string>
#include <sstream> //R/W to string

int main()
{
    std::stringstream stringVar = "Hi";
    std::cout << stringVar.str(); // to print the content of the string stream(stores it in a var{type: string})
}