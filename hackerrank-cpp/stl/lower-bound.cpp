// lower bound - STL

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arraySize = 0;
    cin >> arraySize;
    int arr[arraySize];

    for (int i = 0; i < arraySize; i++)
        cin >> arr[i];

    int queryCount = 0;
    cin >> queryCount;

    int temp;
    for (int i = 0; i < queryCount; i++)
    {
        cin >> temp;
        for (int j = 0; j < arraySize; j++)
        {
            if (temp < arr[j])
            {
                cout << "No " << j + 1 << endl;
                break;
            }
            if (arr[j] == temp)
            {
                cout << "Yes " << j + 1 << endl;
                break;
            }
        }
    }
    return 0;
}

// using vector

int vectorSize = 0;
cin >> vectorSize;
vector<int> v;

for (int i = 0; i < vectorSize; i++)
{
    int tempInt = 0;
    cin >> tempInt;
    v.push_back(tempInt);
}

int queryCount = 0;
cin >> queryCount;

int temp;
for (int i = 0; i < queryCount; i++)
{
    cin >> temp;
    vector<int>::iterator pos = std::find(v.begin(), v.end(), temp);
    if (pos != v.end())
    {
        cout << "Yes " << (pos - v.begin() + 1) << endl;
    }
    else
    {
        pos = std::lower_bound(v.begin(), v.end(), temp);
        cout << "No " << (pos - v.begin() + 1) << endl;
    }
}
return 0;
}