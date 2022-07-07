#include <bits/stdc++.h>
using namespace std;

void printVectorPair(vector<pair<int, int>> v)
{
    cout << "Size of vector is: " << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        /* code */
        cout << v[i].first << " " << v[i].second << endl;
    }
    cout << endl;
}
void printVector(vector<int> v)
{
    cout << "Size of vector is: " << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        /* code */
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    // Place your code here

    // Vector of pairs
    // vector<pair<int, int>> v;
    // printVectorPair(v);
    // v.push_back({1, 4});
    // v.push_back({4, 2});
    // v.push_back({9, 4});
    // printVectorPair(v);

    // Array of vectors
    // vector<int> v[4];
    // for (int i = 0; i < 4; i++)
    // {
    //     /* code */
    //     for (int j = 0; j < rand() % 10; j++)
    //     {
    //         /* code */
    //         v[j].push_back(rand());
    //     }
    // }
    // for (int i = 0; i < 4; i++)
    // {
    //     /* code */
    //     printVector(v[i]);
    // }

    // Vector of vectors
    // vector<vector<int>> v;
    // for (int i = 0; i < 4; i++)
    // {
    //     /* code */
    //     v.push_back(vector<int>());
    //     printVector(v[i]);
    //     for (int j = 0; j < rand() % 10; j++)
    //     {
    //         /* code */
    //         v[i].push_back(rand() % 100);
    //     }
    //     printVector(v[i]);
    // }

    return 0;
}