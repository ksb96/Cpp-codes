// vector - storing sequence of contaginuos elements of any type

#include <vector>

int main()
{
    std::vector<int> v = {1, 2, 3, 4, 5};
    std::cout << v << '\n';
}

// .push_back()
#include <vector>

int main()
{
    std::vector<int> v = {1, 2, 3, 4, 5};
    v.push_back(6);
    v.size();
    std::cout << v << '\n';
}
