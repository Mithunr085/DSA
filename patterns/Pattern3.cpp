#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 3;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << (j + 1) << " ";
        }
        cout << endl;
    }
    /*
        o/p :
        1 2 3
        1 2 3
        1 2 3
    */
    return 0;
}