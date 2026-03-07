#include<iostream>     // This approach is for sorted array
#include<vector>
#include<algorithm>    // Included for using the sort function
using namespace std;

int main()
{
    vector<int> nums = {1,2,1,2,1,1};
    int n = nums.size();

    sort(nums.begin(), nums.end());

    int freq = 1, ans = nums[0];
    for(int i = 1; i< n; i++)
    {
        if(nums[i] == nums[i-1])
        {
            freq++;
        }
        else{
            freq = 1;
            ans = nums[i];
        }
        if(freq > n/2)
        {
            cout << ans;
            break;
        }
    }
    return 0;
}