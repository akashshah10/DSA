#include <iostream>
#include <vector>
using namespace std;

int main()
{
    char key = 'd';
    vector<char> vec = {'a', 'b', 'c', 'd'};

    int index = -1; // start with -1 (means "not found")

    for (int i = 0; i < vec.size(); i++)
    {
        if (vec[i] == key)
        {
            index = i;
            cout << "Index: " << index << endl;
            break; // stop after finding
        }
    }

    if (index == -1) // only print if never updated
    {
        cout << "Not found" << endl;
    }

    return 0;
}
