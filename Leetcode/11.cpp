// Container with most water
#include<iostream>
#include <vector>
#include <algorithm>

using namespace std;


int mostWater(vector<int>& height)
{
    //--> Optimal Approach(USing 2 pointer)
    int maxWater = 0, lp = 0, rp = height.size() - 1;
    while(lp < rp)
    {
        int width = rp - lp;
        int ht = min(height[lp], height[rp]);
        int currWater = width * ht;
        maxWater = max(currWater,maxWater);

        height[lp] < height[rp] ? lp++ : rp--;
    }
    return maxWater;
    
    
}

//--> Brute Force Approach
//{ 
//     int currWater, maxWater = 0;
//     for(int i = 0; i < height.size()-1; i++)
//     {
//         for(int j = i+1; j < height.size(); j++)
//         {
//             currWater = min(height[i],height[j]) * (j-i);
//         }
//         maxWater = max(currWater, maxWater);
//     }
//     return maxWater;
// }


int main()
{
    vector<int> height = {1,8,6,2,5,4,8,3,7};
    cout << mostWater(height);

    return 0;
}