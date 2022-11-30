#include <iostream>
using namespace std;

void sumdifference(int a, int b)
{
    auto sum = a + b;
    auto diff = a - b;
    cout << sum << '\n';
    cout << diff;
}

int main()
{
    sumdifference(4, 5);
    return 0;
}