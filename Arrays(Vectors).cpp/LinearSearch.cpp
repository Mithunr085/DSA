#include <bits/stdc++.h>
using namespace std;

int linearSerach(int arr[], int n, int target)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int n, target, res;
    cout << "Enter the Number of Elements in Array : ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the Element to be Searched in Array : ";
    cin >> target;
    res = linearSerach(arr, n, target); // lets try to return the position of the element if present
    if (res != -1)
    {
        cout << "Element " << target << " is found in array at position " << res;
    }
    else
    {
        cout << "Element " << target << " is not found in the array ";
    }
    return 0;
}