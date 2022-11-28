// a wrapper around a raw pointer.
// it takes care(automatically) of allocating memory in the heap for an object and automatically deletes that object memory from the heap when its out of scope.

// synatx

#include <iostream>
#include <memory>

int main()
{
    std::smart_pointer<type> var_name(new type = value);
    var_name->method();
    std::cout << *var_name;
}

// smart pointers are of 3 types -- unique, shared, weak

// unique
#include <iostream>
#include <memory>

int main()
{
    std::unique_ptr<int> p(new int = 5);
    std::cout << *p;
} // 'p' is automatically gets deleted as it is out-of-scope

// unique-1
#include <iostream>
#include <memory>

class MyClass
{
    {
        public :
            void print(){
                std::cout << "Hi";
}
};
int main()
{
    std::unique_ptr<MyClass> p = std::make_unique<MyClass>; // pointing the public class
    p->print();
}
}

// shared
#include <iostream>
#include <memory>

int main()
{
    std::shared_ptr<int> p1 = std::make_shared<int> = 11;
    std::shared_ptr<int> p2 = p1;
    std::shared_ptr<int> p3 = p1;
}