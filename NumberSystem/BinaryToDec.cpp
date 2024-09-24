#include <bits/stdc++.h>
using namespace std;

int declval(int bin)
{
    int dec = 0, i = 0;
    while (bin > 0)
    {
        int rem = bin % 10;     // 101 1, 0,1
        bin /= 10;              // 10,1,0
        dec += rem * pow(2, i); // 0+1, 1+2^1 =3,3+2^2   1*2^2+0*2^1+1*2^0
        i++;
    }
    return dec;
}

int main()
{
    int bin;
    cout << "Enter the Binary Num";
    cin >> bin;
    int dec = declval(bin);
    cout << dec;
    return 0;
}