#include <bits/stdc++.h>
using namespace std;
void date()
{
    int x, y;
    cin >> x >> y;
    if (x >= y)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int main()
{
    // Place your code here
    int n;
    cin >> n;
    while (n--)
    {
        date();
    }
    return 0;
}