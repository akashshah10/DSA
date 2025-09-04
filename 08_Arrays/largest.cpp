#include <iostream>
#include <climits>

using namespace std;

int main()
{
    int size = 5;
    int num[] = {6, 2, 3, 4, 5};
    int largest = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        largest = max(num[i], largest);
    }
    cout << largest << endl;
    return 0;
}