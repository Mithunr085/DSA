#include <bits/stdc++.h>
using namespace std;

void armstrongNumber(int num)
{
    // step 1 : count the num of digits in num
    int exp = 0, copy = num, sum = 0;
    while (num > 0)
    {
        num /= 10;
        exp += 1;
    }
    // step 2 : computation
    num = copy;
    while (num > 0)
    {
        int rem = num % 10;
        num /= 10;
        // Compute rem^exp manually since pow() doesnt work here because pow involves floating-point arithmetic, which can introduce small precision errors.
        int power = 1;
        for (int i = 0; i < exp; i++)
        {
            power *= rem;
        }

        sum += power;
    }
    // step 3 : checking
    if (sum == copy)
    {
        cout << "Number : " << copy << " is an Armstrong Number";
        return;
    }
    else
    {
        cout << "Number : " << copy << " is Not an Armstrong Number";
    }
}

int main()
{
    int num;
    cout << "Enter the Number : ";
    cin >> num;
    armstrongNumber(num);
    return 0;
}
/*
i/p :153
o/p : Amstrong Number

explaination :
1}153 : count the number of digits in input num : eg for 153 there are 3 digits.
2}Computation by adding the number of digits as pow of every digits and checking if its equal to the input num: 1^3+5^3+3^3=153
3} if step 2 is true then it is armstrong number orelse not
------------------------------------------
some of the other armstrong numbers are : 370,371,470 etc...
*/