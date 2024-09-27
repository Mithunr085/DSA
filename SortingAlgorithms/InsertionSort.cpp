#include <bits/stdc++.h>
using namespace std;

void insertionSort(int a[], int n)
{
    int j;
    for (int i = 1; i < n; i++) // starting from 2nd element
    {
        int current = a[i];
        j = i - 1;
        while (j >= 0 && a[j] > current) // loops until correct position of element
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = current; // inserting the element to its correct position
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
    insertionSort(a, n);

    return 0;
}