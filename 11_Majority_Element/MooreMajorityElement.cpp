// Moore's Voting Algorithm
#include <iostream>
#include <vector>
using namespace std;

int majorityElement(vector<int>& nums)
{
    int freq = 0, ans = 0;

    for(int i = 0; i < nums.size(); i++)
    {
        if(freq == 0)
        {
            ans = nums[i];   //Whenever the count drops to 0, it means the current candidate is no longer dominant, so we pick the current number as a new candidate.
        }
        if(ans == nums[i])
        {
            freq++;
        }
        else{
            freq --;
        }
    }
    if(freq > nums.size() / 2)
    {
        return ans;
    }
    return -1;
}

int main()
{
    vector<int> nums = {2,2,1,1,1,1,2,2};
    cout << majorityElement(nums);
    return 0;
}