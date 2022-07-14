#include <bits/stdc++.h>
using namespace std;
void bid()
{
    int a, b, c;
    cin >> a >> b >> c;
    multiset<int> s;
    s.insert(a);
    s.insert(b);
    s.insert(c);
    auto last = --s.end();
    if (*last == a)
    {
        cout << "Alice" << endl;
        return;
    }
    if (*last == b)
    {
        cout << "Bob" << endl;
        return;
    }
    if (*last == c)
    {
        cout << "Charlie" << endl;
        return;
    }
}

int main()
{
    // Place your code here
    int t;
    cin >> t;
    while (t--)
    {
        bid();
    }
    return 0;
}