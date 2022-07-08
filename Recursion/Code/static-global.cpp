#include <bits/stdc++.h>
using namespace std;

int x = 0;

int func(int n)
{
    // static int x = 0;
    if (n > 0)
    {
        x = x + 1;
        return func(n - 1) + x;
    }
    return 0;
}

int main()
{
    // Place your code here
    int n;
    cin >> n;
    cout << func(n);
    return 0;
}