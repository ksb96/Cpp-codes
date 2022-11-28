// Is a way to sync access to shared object(ex - cout) between multiple threads

#include <iostream>
#include <thread>
#include <mutex>

std::mutex m;

void function(const std::string &s)
{
    for (int i = 0; i < 10; i++)
    {
        m.lock();
        std::cout << "Executing" << s << '\n';
        m.unlock();
    }
}

int main()
{
    std::thread t1{function, "Thread 1"};
    std::thread t2{function, "Thread 2"};
    t1.join();
    t2.join();
}
