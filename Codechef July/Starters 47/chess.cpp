#include <bits/stdc++.h>
using namespace std;
void chess()
{
    int x;
    cin >> x;
    cout << int((x * 60) / 20) << endl;
}

int main()
{
    // Place your code here
    int n;
    cin >> n;
    while (n--)
    {
        chess();
    }
    return 0;
}