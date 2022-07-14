#include <bits/stdc++.h>
using namespace std;

void height()
{
    int n;
    cin >> n;
    vector<long long> a(n);
    vector<long long> diff;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<long long> asc_a = a;
    sort(asc_a.begin(), asc_a.end());
    vector<long long> des_a = a;
    sort(des_a.begin(), des_a.end(), greater<int>());
    set<long long> s;
    for (int i = 0; i < n; i++)
    {
        s.insert(a[i]);
    }
    int size = s.size();
    for (auto it = s.begin(); it != s.end(); it++)
    {
        auto it_1 = find(asc_a.begin(), asc_a.end(), *it);
        auto it_2 = find(des_a.begin(), des_a.end(), *it);
        int index_1 = it_1 - asc_a.begin();
        int index_2 = it_2 - des_a.begin();
        if (index_1 + index_2 + 1 == n)
        {
            diff.push_back(*it);
        }
    }
    int extra = 3 * pow(10, 5);
    if (diff.size() % 2 == 0)
    {
        cout << (diff.size() / 2) % extra << endl;
    }
    else
    {
        cout << (diff.size() / 2 + 1) % extra << endl;
    }
}

int main()
{
    // Place your code here
    int n;
    cin >> n;
    int nn = 5 * pow(10, 4);
    n = n % nn;
    while (n--)
    {
        height();
    }
    return 0;
}