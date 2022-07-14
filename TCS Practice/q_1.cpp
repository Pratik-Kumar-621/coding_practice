#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Place your code here
    int vehicles, wheel;
    cin >> vehicles >> wheel;
    int count = wheel / 2;
    cout << "Four Wheelers :" << count - vehicles << endl;
    cout << "Two Wheelers :" << vehicles - (count - vehicles) << endl;
    return 0;
}