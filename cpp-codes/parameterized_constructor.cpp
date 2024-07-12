// para-constructor
#include <iostream>
class para
{
    // initialize part
    int data;

public:
    // constructor + logic part & value assign
    para(int x)
    {
        data = x;
    }
    void display()
    {
        std::cout << data << '\n';
    }
};
int main()
{
    // call block
    para obj(50); // obj created and called and value passed
    obj.display();
    return 0;
}