#include <bits/stdc++.h>
using namespace std;

void print(vector<int> res)
{
    cout << " output array : ";
    for (auto it : res)
    {
        cout << it << " ";
    }
}

void merge(vector<int> a, vector<int> b)
{
    vector<int> temp;
    int n = a.size(), m = b.size(), i = 0, j = 0; // n is size of 1st array,m is the size of 2nd array,i&j are the index of 1st & 2nd array respectively.
    while (i < n && j < m)                        // until last elem of possible arrays
    {
        if (a[i] <= b[j])
        {
            temp.push_back(a[i]);
            i++;
        }
        else
        {
            temp.push_back(b[j]);
            j++;
        }
    }
    // if some elements are left out
    while (i < n) // if 2nd array size is less than 1st and some elements are remaining in 1st array to add in temp
    {
        temp.push_back(a[i]);
        i++;
    }
    while (j < m) // if 1st array size is less than 2nd and some elements are remaining in 2nd array to add in temp
    {
        temp.push_back(b[j]);
        j++;
    }
    print(temp); // to print array
}

int main()
{
    int n, k;
    vector<int> a, b;
    cout << "Enter the Size of an 1st array : ";
    cin >> n;
    cout << "Enter the 1st array elements in sorted manner : ";
    for (int i = 0; i < n; i++)
    {
        int elem;
        cin >> elem;
        a.push_back(elem);
    }
    cout << "Enter the Size of an 2nd array : ";
    cin >> k;
    cout << "Enter the 2nd array elements in sorted manner : ";
    for (int i = 0; i < k; i++)
    {
        int elem;
        cin >> elem;
        b.push_back(elem);
    }
    merge(a, b); // to merge 2 sorted array
    return 0;
}
/*
eg-1:
i/p  :
5
1 3 5 7 9
5
2 4 6 8 10
o/p: 1 2 3 4 5 6 7 8 9 10
eg-2:
i/p  :
5
1 3 5 7 9
3
2 4 6
o/p: 1 2 3 4 5 6 7 9


*/