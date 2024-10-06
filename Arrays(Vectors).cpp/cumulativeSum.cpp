#include <bits/stdc++.h>
using namespace std;
vector<int> getCumulativeSum(vector<int> &arr)
{
    vector<int> b; // to store the cumulative sums of the input array elements
    int flag = 0, sz = arr.size();
    for (int i = 0; i < sz; i++)
    {
        flag += arr[i]; // calculating sums
        b.push_back(flag);
    }
    return b;
}

int main()
{
    vector<int> a, b;
    int n;
    cout << "Enter the Size of an array : ";
    cin >> n;
    cout << "Enter the array Elements : ";
    for (int i = 0; i < n; i++)
    {
        int elem;
        cin >> elem;
        a.push_back(elem);
    }
    b = getCumulativeSum(a); // function to calculate cumulative sum
    for (auto it : b)        // for each loop
    {
        cout << it << " ";
    }
}
/*
input array : 1 1 1 1
output array : 1 2 3 4
explaination : output array contains the cumulative sum of elements in input array eg. 1,1+1,1+1+1,1+1+1+1
NOTE: SUM OF ODD CONSECUTIVES LEADS TO PERFECT SQUARE NUMBER // helpful for mcq
*/