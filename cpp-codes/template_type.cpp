// Template accepts any type(blueprint)
// Used mainly in Class and functions
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
// For single parameter
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include <iostream>

//template defining
template <typename T> // 'T' is the type

void Display(T param) //'param' is the variable name
{ 
    std::cout << "The value of param is : " << param << '\n';
}
int main()
{
    Display<int>(223);
    Display<double>(645.8876);
    Display<char>('e');
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
// For multiple parameter
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include <iostream>

template <typename T, typename U> // 'T,U' are the type's

void Display(T x, U y) //'x,y' are the variable names
{ 
    std::cout << "The value of T(x) is : " << x << '\n';
    std::cout << "The value of U(y) is : " << y << '\n';
}
int main()
{
    int x = 23;
    double y = 4453.9;
    Display<int, double>(x, y);//23 4453.9
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
// multiple parameters

#include <iostream>

// 'T,U' are the type's(data)
template <typename T, typename U> 

void Display(T x, U y) //'x,y' are the variable names
{ 
    int result = x + y;
    // return result;
    std::cout << "The value of result is : " << result << '\n';
}
int main()
{
    Display<int, int>(334776, 44533);//one-liner value pass(during function invoke)  
}