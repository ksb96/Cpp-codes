// associative container that holds key-value pair

#include <iostream>
#include <map>

int main()
{
    std::map<int, char> mapvar = {{1, 'a'},
                                  {2, 'b'},
                                  {3, 'c'}};
    for (auto x : mapvar) //looping
    {
        std::cout << x.first << "-" << x.second << '\n'; //printing 'first' & 'second' element of a row 
    }
    return 0;
}