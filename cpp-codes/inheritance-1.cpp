#include <iostream>
class Parent
{
public:
    int value;
};
// child class
class Child : public Parent
{
public:
    // a method need to be used(prefer 'void')
    void function()
    {
        std::cout << "The value is : " << value << '\n';
    }
};

int main()
{
    Child obj;      // child obj created
    obj.value = 22; // value(parent) is assigned(public, that's why)
    obj.function(); // invoking/calling
}