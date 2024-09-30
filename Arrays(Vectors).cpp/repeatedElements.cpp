#include <bits/stdc++.h>
using namespace std;

void repeatedElem(int a[], int n) // to print the repeated elements in the array
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (i != j && a[i] == a[j])
            {
                cout << a[i] << " ";
            }
        }
    }
}

int main()
{
    int n;
    cout << "Enter the Number of Elements in Array : ";
    cin >> n;
    int arr[n];
    cout << "Enter the Elements of Array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    repeatedElem(arr, n);
    return 0;
}
