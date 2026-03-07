<<<<<<< HEAD
#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {2, 5, 8, 62, 90};
    int size = 90;
    int target = 100;

    cout << linearSearch(arr, size, target) << endl;
    return 0;
=======
#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {2, 5, 8, 62, 90};
    int size = 90;
    int target = 100;

    cout << linearSearch(arr, size, target) << endl;
    return 0;
>>>>>>> 299e1a5 (DSA)
}