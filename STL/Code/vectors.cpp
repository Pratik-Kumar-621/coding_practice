#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Place your code here

    vector<int> v(10, 3);
    vector<int> v1 = v;
    for (int i = 0; i < v1.size(); i++)
    {
        /* code */
        cout << v[i] << " ";
    }

    // vector<int> v(3, 10);
    // cout << "Size: " << v.size() << " Capacity: " << v.capacity() << endl;
    // v.push_back(6);
    // cout << "Size: " << v.size() << " Capacity: " << v.capacity() << endl;
    // v.pop_back();
    // cout << "Size: " << v.size() << " Capacity: " << v.capacity() << endl;
    // v.clear();
    // cout << "Size: " << v.size() << " Capacity: " << v.capacity() << endl;

    // vector<int> v;
    // v.push_back(100);
    // cout << "Size: " << v.size() << " Capacity: " << v.capacity() << endl;
    // v.push_back(100);
    // cout << "Size: " << v.size() << " Capacity: " << v.capacity() << endl;
    // v.push_back(100);
    // cout << "Size: " << v.size() << " Capacity: " << v.capacity() << endl;
    // v.push_back(100);
    // cout << "Size: " << v.size() << " Capacity: " << v.capacity() << endl;

    return 0;
}