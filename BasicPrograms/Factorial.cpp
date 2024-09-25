#include <bits/stdc++.h>
using namespace std;

int factorial(int n)
{
    int fact = 1;
    if (n == 0)
    {
        return 1;
    }
    for (int i = n; i > 0; i--)
    {
        fact *= i;
    }
    return fact;
}

int main()
{
    int num, fact = 1;
    cout << "Enter the Number : ";
    cin >> num;
    fact = factorial(num);
    cout << "Factorial of number : " << num << " is : " << fact;
    return 0;
}