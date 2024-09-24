#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 3;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << (i + 1) * (j + 1) << " ";
        }
        cout << endl;
    }
    /*
        o/p :
        1 2 3
        2 4 6
        3 6 9
    */
    return 0;
}