#include <iostream>

class over
{
public:
    void output()
    {
        std::cout << "Nothing to display" << '\n';
    }
};

class override
{
public:
    // override
    void output()
    {
        std::cout << "Something to display" << '\n';
    }
};

int main()
{
    override obj;
    obj.output();
}
