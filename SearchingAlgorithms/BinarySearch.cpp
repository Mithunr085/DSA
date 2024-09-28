#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int low, int high, int key)
{
    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        // Check if key is present at mid
        if (arr[mid] == key)
            return mid;

        // If key greater, ignore left half
        if (arr[mid] < key)
            low = mid + 1;

        // If key is smaller, ignore right half
        else
            high = mid - 1;
    }

    // If we reach here, then element was not present
    return -1;
}

int main()
{
    int n, target, res;
    cout << "Enter the Number of Elements in Array : ";
    cin >> n;
    int arr[n];
    cout << "Enter the  Elements of Array SORTED : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the Element to be Searched in Array : ";
    cin >> target;
    res = binarySearch(arr, 0, n - 1, target); // n-1 because we r dealing with direct indexes of array in function
    if (res != -1)
    {
        cout << "Element " << target << " is found in array at index " << res;
    }
    else
    {
        cout << "Element " << target << " is not found in the array ";
    }
    return 0;
}