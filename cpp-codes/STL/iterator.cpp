// are used to point at the memory address of an STL containers

#include <iostream>
#include <iterator>
#include <vector>

int main()
{
    std::vector<int> v = {1, 2, 3, 4, 5};
    // declaring  iterator to a vector
    vector<int>::iterator ptr;
    std::cout << "The vector elements are -";
    for (ptr = v.begin(); ptr < v.end(); ptr++)
        std::cout << *ptr; //value/s pointing by the ptr
    return 0;
}

// to sort in ascending order
#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
    std::vector<int> container = {65, 998, 2, 99, 2222, 3};
    // sort
    std::sort(container.begin(), container.end());
    //iterate 
    for (auto element : container)
    {
        std::cout << element << '\n';
    }
}

// descending
std::sort(container.begin(), container.end(), std::greater<int>()); // comparator