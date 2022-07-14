#include <bits/stdc++.h>
using namespace std;

void ugliness()
{
    int N;
    cin >> N;
    string v;
    cin >> v;
    // vector<char> v(N);
    // for (int i = 0; i < N; i++)
    // {
    //     cin >> v[i];
    // }
    int value = 0;
    int cash, a, b;
    cin >> cash >> a >> b;
    int b_count = cash / b;
    int a_count = (cash - b_count * b) / a;
    if (b_count >= N)
    {
        cout << value << endl;
    }
    else
    {
        for (int i = 0; i < N; i++)
        {
            if (b_count != 0 && v[i] == '1')
            {
                v[i] = '0';
                b_count--;
            }
        }
        for (int i = 0; i < N; i++)
        {
            cout << (int(v[i]) - 48) * pow(2, N - i - 1) << endl;
        }
    }
}

int main()
{
    // Place your code here
    ugliness();
    return 0;
}

/*
input:
N : length of string
S : string
C : cash
A : price of swap
B : price of exchange
4
1111
7
1
2

*/