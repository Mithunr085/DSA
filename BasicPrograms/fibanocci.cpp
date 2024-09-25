#include <bits/stdc++.h>
using namespace std;

void fibonnaciSeries(int n) // function to find fibanocci series iteratively
{
    int p1 = 0, p2 = 1, res;
    if (n <= 2)
    {
        for (int i = 0; i < n; i++)
        {
            cout << i << " ";
        }
    }
    else if (n > 2)
    {
        cout << p1 << " " << p2 << " ";
        for (int i = 2; i < n; i++)
        {
            res = p1 + p2; // 0+1,1+1,1+2
            cout << res << " ";
            p1 = p2;  // 1,1,2
            p2 = res; // 1,2,3
        }
    }
}

int main()
{
    int n;
    cout << "Enter the Number : ";
    cin >> n;
    cout << "Fibanocci Series : ";
    fibonnaciSeries(n);
    return 0;
}
/*
5
0 1 1 2 3
*/