#include <iostream>
#include <fstream>
#include <string> //to convert to string

int main()
{
    std::fstream read("newTextFile.txt");
    std::string s;
    while (read)
    {
        std::getline(read, s); // read each line & convert to string
        std::cout << s << '\n';
    }
}

// read one character
char c;
while (read >> c)
{
    std::cout << c;
}