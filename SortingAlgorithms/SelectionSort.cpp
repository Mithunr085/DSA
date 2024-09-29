#include <bits/stdc++.h>
using namespace std;

void selectionSort(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int min = i; // min is to keep track of the minimum number at each possible iteration(Selecting the minimum number in array)
        for (int j = i; j < n; j++)
        {
            if (a[min] > a[j])
            {
                min = j;
            }
        }
        int temp = a[i]; // temp to swap the minimum number at each iteration with the jth index number
        a[i] = a[min];
        a[min] = temp;
    }
    cout << "Sorted Array : ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

int main()
{
    int n;
    cout << "Enter the size of an array : ";
    cin >> n;
    int a[n];
    cout << "Enter the array elements : ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    selectionSort(a, n);
    return 0;
}