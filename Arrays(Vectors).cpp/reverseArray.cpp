#include <bits/stdc++.h>
using namespace std;

void reverseArray(vector<int> a)
{
    int start = 0, end = a.size() - 1;
    while (start < end)
    {
        swap(a[start++], a[end--]);
    }
    for (auto it : a)
    {
        cout << it << " ";
    }
}

int main()
{
    int n;
    vector<int> a;
    cout << "Enter the Size of an  array : ";
    cin >> n;
    cout << "Enter the  array elements  : ";
    for (int i = 0; i < n; i++)
    {
        int elem;
        cin >> elem;
        a.push_back(elem);
    }
    reverseArray(a);
    return 0;
}