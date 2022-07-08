#include <bits/stdc++.h>
using namespace std;

void start(int n) // recursive fn is called after the code so code executed in the same order
{
    if (n > 0)
    {
        // start(n - 1);
        cout << n << " ";
        start(n - 1);
    }
}

void end(int n) // recursive fn is called before the code so code executed in the opposite order
{
    if (n > 0)
    {
        start(n - 1);
        cout << n << " ";
    }
}

int main()
{
    // Place your code here
    int n;
    cin >> n;
    start(n); // printing is done at calling time
    cout << endl;
    end(n); // printing is done at returing time
    cout << endl;
    return 0;
}