#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, small = INT_MAX, large = INT_MIN;
    cout << "Enter the Size of an array :  ";
    cin >> n;
    int arr[n];
    // input the array elements
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // find smallest and largest elem
    for (int i = 0; i < n; i++)
    {
        small = min(small, arr[i]);
        large = max(large, arr[i]);
    }
    cout << "The Smallest Element in array is : " << small << " and the largest element is : " << large;

    return 0;
}