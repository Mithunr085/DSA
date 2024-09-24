#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the N value : ";
    cin >> n;
    // top
    for (int i = 0; i < n; i++)
    {
        // pattern
        for (int j = 0; j < i + 1; j++)
        {
            cout << "*";
        }
        // spaces
        for (int j = 0; j < (2 * n - (2 * (i + 1))); j++)
        {
            cout << " ";
        }
        // pattern
        for (int j = 0; j < i + 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    // bottom
    for (int i = 0; i < n - 1; i++)
    {
        // pattern
        for (int j = (n - i - 1); j > 0; j--)
        {
            cout << "*";
        }
        // spaces
        for (int j = 0; j < ((i + 1) * 2); j++)
        {
            cout << " ";
        }
        // pattern
        for (int j = (n - i - 1); j > 0; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}

/*
   1      1
   11    11
   111  111
   11111111
   111  111
   11    11
   1      1
 */