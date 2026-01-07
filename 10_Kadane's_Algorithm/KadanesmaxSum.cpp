#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n = 5;
    int arr[5] = {5, -4, 5, 4, 5};
    int MaxSum = INT_MIN;
    int currentSum = 0;
    for(int i = 0; i < n; i++)
    {
        currentSum += arr[i];
        MaxSum = max(currentSum, MaxSum);
        if (currentSum < 0)
        {
            currentSum = 0;
        }
    }
      cout << "The maximum sub array sum is: " << MaxSum << endl;
        
    return 0;
}
