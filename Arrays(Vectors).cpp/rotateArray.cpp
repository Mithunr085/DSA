#include <bits/stdc++.h>
using namespace std;
vector<int> rotateArray(vector<int> a, int n, int k)
{
    vector<int> temp(n);
    for (int i = 0; i < n; i++)
    {
        temp[(i + k) % n] = a[i];
    }

    return temp;
}
int main()
{
    int n, k;
    vector<int> a, b;
    cout << "Enter the Size of an array : ";
    cin >> n;
    cout << "Enter the array elements : ";
    for (int i = 0; i < n; i++)
    {
        int elem;
        cin >> elem;
        a.push_back(elem);
    }
    cout << "Enter the value of k for rotation of array elements : ";
    cin >> k;
    b = rotateArray(a, n, k);
    for (auto it : b)
    {
        cout << it << " ";
    }
    return 0;
}