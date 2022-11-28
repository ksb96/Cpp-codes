// running parallely

// 1
#include <iostream>
#include <thread>

void function()
{
    for (int i = 0; i < 10; i++)
    {
        std::cout << "Executing - " << '\n';
    }
}
int main()
{
    //'thread'- thread object
    std::thread t1{function}; // thread start
    t1.join();                // wait for "t1" to finish before the "main" execution
}

// 2 (Using parameter)
#include <iostream>
#include <thread>
#include <string>

void function1(const std::string &s)
{
    for (int i = 0; i < 10; i++)
    {
        std::cout << "Executing - " << '\n';
    }
}
int main()
{
    std::thread t1{function1, "Hello from thread"};
    t1.join();
}

// 3 (Multi threads - multi process)
#include <iostream>
#include <thread>

void function2()
{
    for (int i = 0; i < 10; i++)
    {
        std::cout << "Executing 2 - " << '\n';
    }
}

void function3()
{
    for (int i = 0; i < 10; i++)
    {
        std::cout << "Executing 3 - " << '\n';
    }
}

int main()
{
    std::thread t2{function2};
    std::thread t3{function3};
    t2.join();
    t3.join();
}
