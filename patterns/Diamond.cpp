#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 5;
    // upper part of diamond/rhombus
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
    // lower part of rhombus/diamond
    for (int i = 1; i < n; i++)
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