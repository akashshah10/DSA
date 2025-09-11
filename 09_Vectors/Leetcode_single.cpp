// You are given a non-empty array of integers, where every element appears exactly twice except for one element which appears only once.

// Your task is to find and return that single element.
#include <iostream>
#include <vector>
using namespace std;

int SingleNumber(vector<int> &nums)
{
    int ans = 0;
    for (int val : nums)
    {
        ans = ans ^ val;
    }
    return ans;
}

int main()
{
    vector<int> nums = {2, 2, 1, 8, 1};
    cout << SingleNumber(nums);
    return 0;
}