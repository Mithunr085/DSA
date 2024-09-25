#include <bits/stdc++.h>
using namespace std;

int sumDigits(int num)
{
    int sum = 0;
    while (num > 0)
    {
        int rem = num % 10;
        num /= 10;
        sum += rem;
    }
    return sum;
}

int main()
{
    int num;
    cout << "Enter the Number : ";
    cin >> num;
    int result = sumDigits(num);
    cout << "The sum of the Digits in the Number : " << num << " is " << result;
    return 0;
}