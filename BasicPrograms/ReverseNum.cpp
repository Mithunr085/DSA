#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cout << "Enter the Number : ";
    cin >> num;
    int rem, rev = 0, copy = num; // rem=remainder,rev=to store reverse of num,copy for storing original number
    while (num > 0)               // 123
    {
        rem = num % 10;       // to get last digit  in num ,3
        rev = rev * 10 + rem; // 0*10+3,3*10+2,32*10+1 =321
        num /= 10;
    }
    cout << "reverse of Number : " << copy << " is " << rev;
    return 0;
}