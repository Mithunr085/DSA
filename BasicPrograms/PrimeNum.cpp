#include <bits/stdc++.h>
using namespace std;

bool isPrime(int num)
{
    bool prime = true;
    if (num == 0 || num == 1)
    {
        return false;
    }
    for (int i = 2; i < num / 2; i++)
    {
        if (num % i == 0)
        {
            prime = false;
            return prime;
        }
    }
    return prime;
}

int main()
{
    int num;
    cout << "Enter the Number : ";
    cin >> num;
    bool res = isPrime(num);
    if (res)
    {
        cout << "The number " << num << " is prime ";
    }
    else
    {
        cout << "The number " << num << " is not prime ";
    }
    return 0;
}