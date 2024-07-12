// a container that holds unique, sorted objects.
// a binary tree of sorted objects

#include <iostream>
#include <set>

int main()
{
    //lib - datatype - var.name
    std::set<int> myset = {1, 2, 3}; // sorted + unique
    std::cout << myset << '\n';
    myset.insert(4);
    myset.insert(6);
}