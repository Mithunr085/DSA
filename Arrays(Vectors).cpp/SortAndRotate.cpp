#include <bits/stdc++.h>
using namespace std;

bool check(vector<int> &nums)// function to evaluate
{
    int count = 0, sz = nums.size();// count is to keep track of array elements , if the count is greater than 1 then we shd return false 

    for (int i = 1; i < sz; i++)
    {
        if (nums[i - 1] > nums[i])//to check from 1st index to last index if its sorted or not ,, if count becomes one then it may be rotated sorted array
            count++;
    }
    if (nums[sz - 1] > nums[0])// check last element is greater than 1st element in array because if the array is not rotated sorted but sorted then count becomes one
        count++;

    return count <= 1;// if array is sorted or rotated sorted then count value is 1 , if all elements in the array are equal then the count value is 0 orelse its greater than 1
}

int main()
{
    int n;
    vector<int> a, b;
    cout << "Enter the Size of an array : ";
    cin >> n;
    cout << "Enter the array elements : ";
    for (int i = 0; i < n; i++)
    {
        int elem;
        cin >> elem;
        a.push_back(elem);
    }
    if (check(a))
    {
        cout << "True";
    }
    else
    {
        cout << "False";
    }
    return 0;
}
/*
our main aim is to check array is sorted if not then check if its rotated sorted array if both conditions fails return false or else True
i/p array : 1 2 3 4 5 // sorted array
o/p : True // since its sorted

i/p array : 3 4 5 1 2 // this is rotated sorted array
o/p : True

i/p array : 1 2 4 3 5 // unsorted array 
o/p : False

*/
