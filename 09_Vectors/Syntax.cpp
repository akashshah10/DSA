#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<char> vec = {'a', 'b', 'c', 'd'};


    for (int value : vec)
    {
        cout << value << endl;
    }
    return 0;
}