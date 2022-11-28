// You are provided with a vector of N integers.
// Then, you are given 2 queries. For the first query, you are provided with 1 integer, which denotes a position in the vector.
// The value at this position in the vector needs to be erased.
// The next query consists of 2 integers denoting a range of the positions in the vector.
// The elements which fall under that range should be removed.
// The second query is performed on the updated vector which we get after performing the first query.

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, a, i, pos, start, end;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        cin >> a; //new element
        v.push_back(a);
    }
    cin >> pos >> start >> end;
    v.erase(v.begin() + (pos - 1));
    v.erase(v.begin() + start - 1, v.begin() + end - 1);
    int size = v.size();
    cout << size << endl;
    for (auto &e1 : v)
    {
        cout << e1 << " ";
    }
    return 0;
}
