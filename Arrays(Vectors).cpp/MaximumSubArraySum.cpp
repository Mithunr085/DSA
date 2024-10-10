#include <bits/stdc++.h>
using namespace std;

int maxSubArray(vector<int> &nums) // kadane's algorithm
{
    int maxi = INT_MIN, sum = 0; // maxi to store the maximum sum and sum is to for an particular sub array
    for (int i = 0; i < nums.size(); i++)
    {
        sum += nums[i];
        if (sum > maxi)
        {
            maxi = sum;
        }
        if (sum < 0)
        {
            sum = 0;
        }
    }
    return maxi;
}

int main()
{
    int n, sum;
    vector<int> a;
    cout << "Enter the Size of an  array : ";
    cin >> n;
    cout << "Enter the  array elements  : ";
    for (int i = 0; i < n; i++)
    {
        int elem;
        cin >> elem;
        a.push_back(elem);
    }
    sum = maxSubArray(a);
    cout << "The Maximum SubArray Sum is : " << sum;
    return 0;
}
/*
i/p array : -2,1,-3,4,-1,2,1,-5,4
o/p : 6 // since [4+(-1)+2+1]=6 which is maximum subarray sum
*/