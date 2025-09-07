#include <iostream>
#include <climits>

using namespace std;

int main()
{
    int size = 5;
    int num[] = {2, 2, 3, 4, 1};
    int largest = INT_MIN;
    int index = -1;
    for (int i = 0; i < size; i++)
    {
        if (num[i] > largest)
        {
            largest = num[i];
            index = i;
        }
    }
    cout << "Index of the largest element: " << index << endl;
    return 0;
}