#include <bits/stdc++.h>
using namespace std;

void pile()
{
    int n;
    cin >> n;
    vector<long long int> even;
    vector<long long int> odd;
    for (int i = 0; i < n; i++)
    {
        /* code */
        int x;
        cin >> x;
        if (x % 2 == 0)
        {
            even.push_back(x);
        }
        else
        {
            odd.push_back(x);
        }
    }
    if (even.size() == 0)
    {
        cout << "CHEF" << endl;
    }
    else if (odd.size() == 0)
    {
        cout << "CHEFINA" << endl;
    }
    else
    {
        if (*even.begin() > *odd.begin())
        {
            cout << "CHEF" << endl;
        }
        else
        {
            cout << "CHEFINA" << endl;
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
        pile();
    }
    return 0;
}