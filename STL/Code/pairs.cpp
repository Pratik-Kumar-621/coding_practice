#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Place your code here
    pair<int, string> p, q;
    p = {2, "abc"},
    cin >> q.first >> q.second;
    cout << p.first << " " << q.first << " " << p.second << " " << q.second << endl;

    pair<int, int> arr[3];
    arr[0] = {1, 2};
    arr[1] = {3, 1};
    arr[2] = {4, 9};

    for (int i = 0; i < 3; i++)
    {
        /* code */
        cout << arr[i].first << " " << arr[i].second << endl;
    }

    return 0;
}