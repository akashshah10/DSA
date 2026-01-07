#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n = 5;
    int arr[5] = {5, -4, 5, 4, 5};
    int maxSum = INT_MIN;
    for (int st = 0; st < n; st++)
    {
        int currentSum = 0;
        for (int end = st; end < n; end++)
        {
            currentSum += arr[end];
            maxSum = max(maxSum, currentSum);
        }
    }

    cout << "The maximum sub array sum is: " << maxSum << endl;

    return 0;
}