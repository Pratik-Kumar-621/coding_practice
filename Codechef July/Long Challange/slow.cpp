#include <bits/stdc++.h>
using namespace std;

void slow()
{
    int T, N, S;
    cin >> T >> N >> S;

    if (T * N <= S)
    {
        cout << T * (N * N) << endl;
    }
    else
    {
        if (S % N == 0)
        {

            cout << (S / N) * (N * N) << endl;
        }
        else
        {
            cout << (S / N) * (N * N) + (S % N) * (S % N) << endl;
        }
        // else
        // cout << S + (N - (S%N)) << endl;
    }
}

int main()
{
    // Place your code here
    int t;
    cin >> t;
    while (t--)
    {
        slow();
    }

    return 0;
}
