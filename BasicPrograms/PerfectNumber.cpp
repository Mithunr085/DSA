#include <bits/stdc++.h>
using namespace std;
void isPerfectNum(int num)
{
    int sum = 0;
    // step 1 : find the all divisors of num and sum it
    for (int i = 1; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            sum += i;
        }
    }
    // step 2: check the sum and num are equal or not
    if (num == sum)
    {
        cout << "The Number : " << num << " is a perfect Number";
    }
    else
    {
        cout << "The Number : " << num << " is not a perfect Number";
    }
}
int main()
{
    int num;
    cout << "Enter The Number : ";
    cin >> num;
    isPerfectNum(num);
    return 0;
}
/*
6
divisors of 6 are : 1,2,3
so the sum of divisors are 1+2+3=6
hence sum == num ,It is a perfect Num
Other perfect number is 28
*/