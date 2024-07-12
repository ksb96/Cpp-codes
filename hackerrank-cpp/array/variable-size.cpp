// variable size array(not using vector)
#include <iostream>
#include <vector>

// using namespace std;

int main()
{
    int a, b, c;
    std::cin >> a >> b;
    int matrix[a][b];
    for (int i = 0; i < a; i++)
    {
        std::cin >> c;
        for (int j = 0; j < c; j++)
        {
            std::cin >> matrix[i][j];
        }
    }
    for (int k = 0; k < b; k++)
    {
        int r1, r2;
        std::cin >> r1 >> r2;
        std::cout << matrix[r1][r2] << '\n';
    }
    return 0;
}

// using vector
int n, q;
cin >> n >> q;
vector<vector<int>> data;
for (int i = 0; i < n; i++)
{
    int lenth;
    cin >> lenth;
    vector<int> actualData;
    for (int j = 0; j < lenth; j++)
    {
        int elements;
        cin >> elements;
        actualData.push_back(elements);
    }
    data.push_back(actualData);
}

for (int i = 0; i < q; i++)
{
    int row, coloumn;
    cin >> row >> coloumn;
    cout << data[row][coloumn] << endl;
}