#include<iostream>

int main() {
    //local
    int aVar = 22;
    std::cout << "Local scope value: " << aVar << '\n';
    return 0;
}

int main() {
    //global
    int a = 20;
    std::cout << " First a s value: " << a << '\n';
    {
        a = 40;
        std::cout << " Second a s value: " << a << '\n';
    } //second a s value end here!
    
} //first a value end