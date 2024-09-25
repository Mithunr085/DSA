#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num, sum = 0;
    cout << "Enter the Number : ";
    cin >> num;
    sum = ((num) * (num + 1)) / 2;
    cout << "The sum of 1st " << num << " numbers is : " << sum;
    return 0;
}