#include <bits/stdc++.h>
using namespace std;
void passing()
{
    int a, b, c;
    cin >> a >> b >> c;

    int total = a + b + c;
    if (total >= 100 && a >= 10 && b >= 10 && c >= 10)
    {
        cout << "PASS" << endl;
    }
    else
    {
        cout << "FAIL" << endl;
    }
}

int main()
{
    // Place your code here
    int t;
    cin >> t;
    while (t--)
    {
        passing();
    }
    return 0;
}