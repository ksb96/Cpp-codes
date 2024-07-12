// error handling
// try throw catch
#include <iostream>
class Exceptions
{
    try
    {
        int age = 15;
        if (age >= 18)
        {
            std::cout << "Access granted" << '\n';
        }
        else
        {
            throw(age);
        }
    }
    catch (int num)
    {
        std::cout << "Access denied" << '\n';
        std::cout << "Age is: " << num << '\n';
    }
}