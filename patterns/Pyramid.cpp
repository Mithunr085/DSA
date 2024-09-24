#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 5; // rows
    //  pyramid side View (Right Angled Triangle)
    cout << "Right Angled triangle\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << " * ";
        }
        cout << endl;
    }

    // Normal Pyramid
    cout << "Normal Pyramid\n";
    for (int i = 0; i < n; i++)
    {
        // spaces in inverted right angled triangle
        for (int j = n - 2; j >= i; j--)
        {
            cout << "   "; // Use Tab space for proper spacing from left end
        }
        for (int j = 0; j < (2 * (i + 1) - 1); j++)
        {
            cout << " * ";
        }
        cout << endl;
    }
    // inverted pyramid
    cout << "Inverted Pyramid\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "   ";
        }
        for (int j = 0; j < ((2 * (n - i)) - 1); j++)
        {
            cout << " * ";
        }
        cout << endl;
    }
    return 0;
}
/*

 *****
 ***
 *
 */