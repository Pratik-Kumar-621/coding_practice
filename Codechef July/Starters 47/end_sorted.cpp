#include <bits/stdc++.h>
using namespace std;

void end_sorted()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int extra = 3 * pow(10, 5);
    vector<int> b = a;
    sort(b.begin(), b.end());
    if (b[0] == a[0] && b[n - 1] == a[n - 1])
    {
        cout << 0 << endl;
    }
    else if (b[0] == a[0] && b[n - 1] != a[n - 1])
    {
        auto it = find(a.begin(), a.end(), b[n - 1]);
        int index = it - a.begin();

        cout << (n - index - 1) % extra << endl;
    }
    else if (b[0] != a[0] && b[n - 1] == a[n - 1])
    {
        auto it = find(a.begin(), a.end(), b[0]);
        int index = it - a.begin();
        cout << index % extra << endl;
    }
    else if (b[0] != a[0] && b[n - 1] != a[n - 1])
    {
        auto it_1 = find(a.begin(), a.end(), b[0]);
        auto it_2 = find(a.begin(), a.end(), b[n - 1]);
        int index_1 = it_1 - a.begin();
        int index_2 = it_2 - a.begin();
        if (index_1 > index_2)
        {
            cout << ((n - index_2 - 1) + (index_1)-1) % extra << endl;
        }
        else
        {
            cout << ((n - index_2 - 1) + (index_1)) % extra << endl;
        }
    }
}

int main()
{
    // Place your code here
    int t;
    cin >> t;
    while (t--)
    {
        end_sorted();
    }
    return 0;
}

/*

1 3 4 2 2 2 3
    2

*/