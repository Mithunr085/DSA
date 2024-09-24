#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 3, cnt = 1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << cnt++ << " ";
        }
        cout << endl;
    }
    /*
       o/p :
       1 2 3
       4 5 6
       7 8 9
   */

    return 0;
}