/*
Energy E
Exersises N
energy each exercise Ai
tired energy 0 or below
exercise atmost 2 times
min ex


*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Place your code here
    int E, N;
    cin >> E >> N;
    vector<int> A;
    for (int i = 0; i < N; i++)
    {
        int x;
        cin >> x;
        A.push_back(x);
    }
    sort(A.begin(), A.end(), greater<int>());
    int value = E;
    int number = 0;

    for (int i = 0; i < N; i++)
    {
        if (value > 0)
        {
            value = value - A[i];
        }
        if (value <= 0)
        {
            number = (2 * i) + 1;
            break;
        }
        if (value > 0)
        {
            value = value - A[i];
        }
        if (value <= 0)
        {
            number = 2 * (i + 1);
            break;
        }
    }

    // cout << value;
    if (number > 0)
    {
        cout << number;
    }
    else
        cout << -1;
    return 0;
}