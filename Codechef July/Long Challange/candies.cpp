#include <bits/stdc++.h>
using namespace std;
void candies()
{
    int a, b;
    cin >> a >> b;
    if (b >= a)
    {
        cout << 0 << endl;
    }
    else
    {
        if ((a - b) % 4 == 0)
            cout << int((a - b) / 4) << endl;
        else
            cout << int((a - b) / 4) + 1 << endl;
    }
}

int main()
{
    // Place your code here
    int t;
    cin >> t;
    while (t--)
    {
        candies();
    }
    return 0;
}