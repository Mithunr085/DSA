#include <bits/stdc++.h>
using namespace std;

int majorityElement(vector<int> &nums)
{
    int elem, cnt = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (cnt == 0)
        {
            cnt = 1;
            elem = nums[i];
        }
        else if (nums[i] == elem)
        {
            cnt++;
        }
        else
        {
            cnt--;
        }
    }
    return elem;
}

int main()
{
    int n, elem;
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
    elem = majorityElement(a);
    cout << "The Majority element that occurred more than n/2 times in array is : " << elem;
    return 0;
}
/*
i.p array : 2,2,1,1,1,2,2 // n=7(size of array)
o/p : 2 // since 2 has occured more than n/2 i.e 7/2=3 , so 2 has occured more than 3 times (4 times in array)
*/