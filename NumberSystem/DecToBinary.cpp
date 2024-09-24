#include <bits/stdc++.h>
using namespace std;

int decToBin(int dec)
{
    int bin = 0, pow = 1;
    while (dec > 0) // 5
    {
        int rem = dec % 2; // 1,0,1
        dec /= 2;          // 2,1,0
        bin += pow * rem;  // 1*100+0*10+1*1=101
        pow *= 10;
    }
    return bin;
}

int main()
{
    int dec;
    cout << "Enter The Decimal Number : ";
    cin >> dec;
    int bin = decToBin(dec);
    cout << bin;

    return 0;
}
/*
2|5
2|2-1
2|1-0
 |0-1
*/