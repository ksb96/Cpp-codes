// to iterate over the container(a for-loop)

#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v = {1, 2, 3};
    v.push_back(22);
    // for( auto r : v)
    // *prefer 'auto' 
    for (int r : v)
    {                           // iterating the vector(v)
        std::cout << r << '\n'; // copy each element of 'v' in 'r' & display
    }
}