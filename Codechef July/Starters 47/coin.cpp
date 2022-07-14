#include <bits/stdc++.h>
using namespace std;
void coin()
{
    int x;
    cin >> x;
    cout << x % 10 << endl;
}

int main()
{
    // Place your code here
    int n;
    cin >> n;
    while (n--)
    {
        coin();
    }
    return 0;
}