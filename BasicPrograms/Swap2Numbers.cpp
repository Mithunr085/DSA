#include <bits/stdc++.h>
using namespace std;

void swapWithTemp(int num1, int num2)
{

    int temp = num1;
    num1 = num2;
    num2 = temp;
    cout << "The Swapping after using 3rd variable are Num1 :" << num1 << " and Num2 : " << num2 << endl;
}

void swapWithoutTemp(int num1, int num2)
{
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;
    cout << "The Swapping without using 3rd variable are Num1 :" << num1 << " and Num2 : " << num2;
}

int main()
{
    int num1, num2;
    cout << "Enter Two Numbers : ";
    cin >> num1 >> num2;
    swapWithTemp(num1, num2);
    swapWithoutTemp(num1, num2);
    return 0;
}
