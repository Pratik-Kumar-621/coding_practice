#include <bits/stdc++.h>
using namespace std;
void construct()
{
    long long x;
    cin >> x;

    if (x < 7 && x & 2 != 0)
    {

        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }
}

int main()
{
    // Place your code here
    int n;
    cin >> n;
    while (n--)
    {
        construct();
    }
    return 0;
}