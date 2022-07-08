#include <bits/stdc++.h>
using namespace std;

void fun(int n)
{
    if (n > 0)
    {
        fun(n - 1);
        cout << n << " ";
    }
}

int main()
{
    // Place your code here
    int n;
    cin >> n;
    fun(n);
    return 0;
}