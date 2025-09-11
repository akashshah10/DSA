#include <iostream>

using namespace std;

void changeArray(int arr[], int size)
{
    cout << "function" << endl;
    for (int i = 0; i < size; i++)
    {
        arr[i] = 3 * arr[i];
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {1, 2, 3, 4};

    changeArray(arr, 3);

    cout << "main" << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}