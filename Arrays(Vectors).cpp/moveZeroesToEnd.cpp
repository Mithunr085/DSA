#include <bits/stdc++.h>
using namespace std;

void moveZeroes(vector<int> &nums)
{
    vector<int> temp(nums.size());
    int j = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] != 0)
        {
            temp[j++] = nums[i];
        }
    }
    while (temp.size() != nums.size())
    {
        temp[j++] = 0;
    }
    nums = temp;
}

int main()
{
    int n;
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
    moveZeroes(a);
    cout << "Array After Moving the zeroes to end : ";
    for (auto it : a)
    {
        cout << it << " ";
    }
    return 0;
}
/*
i/p:
7
1 3 0 5 0 12 0
o/p: 1 3 5 12 0 0 0
*/