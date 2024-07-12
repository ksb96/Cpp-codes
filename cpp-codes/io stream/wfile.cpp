#include <fstream>
#include<iostream>

int main()
{
    // std::ios::out - a flag to open the file & write & overwrite(if)
    std::fstream output{"outputFile.txt", std::ios::out}; //output - variable name
    output << "First" << '\n';
    output << "Second" << '\n';
    output << "Third" << '\n';
}

// To append text into a file
#include <fstream>

int main()
{
    // std::ios::app - a flag to append(add at the end)
    std::fstream append{"appendFile.txt", std::ios::app};
    append << "This appended" << '\n';
}