// Container with most water
#include<iostream>
#include <vector>
#include <algorithm>

using namespace std;

int mostWater(vector<int>& height)
{
    int container, maxWater = 0;
    for(int i = 0; i < height.size()-1; i++)
    {
        for(int j = i; j < height.size(); j++)
        {
            container = min(height[i],height[j]) * (j-i);
        }
        maxWater = max(container, maxWater);
    }
    return maxWater;
}
int main()
{
    vector<int> height = {1,8,6,2,5,4,8,3,7};
    cout << mostWater(height);

    return 0;
}