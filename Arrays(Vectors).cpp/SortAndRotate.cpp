#include <bits/stdc++.h>
using namespace std;

bool check(vector<int> &nums)
{
    int count = 0, sz = nums.size();

    for (int i = 1; i < sz; i++)
    {
        if (nums[i - 1] > nums[i])
            count++;
    }
    if (nums[sz - 1] > nums[0])
        count++;

    return count <= 1;
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