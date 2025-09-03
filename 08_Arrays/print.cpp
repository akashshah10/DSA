#include <iostream>
using namespace std;

int main()
{
    int size = 5;
    int age[size];

    for (int i = 0; i < size; i++)
    {
        cin >> age[i];
    }

    for (int i = 0; i < size; i++)
    {
        cout << age[i] << endl;
    }
    return 0;
}
