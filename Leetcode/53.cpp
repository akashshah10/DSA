#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int arr[] = {-1, -2, -3, -4, -5, -6, -7};
    int size = 7;
    int CurrSum = 0;
    int MaxSum = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        CurrSum += arr[i];
        MaxSum = max(MaxSum, CurrSum);
        if (CurrSum < 0)
        {
            CurrSum = 0;
        }
    }
    cout << MaxSum << endl;

    return 0;
}
