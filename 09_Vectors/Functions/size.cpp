#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<char> vec = {'a', 'b', 'c', 'd'};

    cout << "Size = " << vec.size() <<endl;

    for (int value : vec)
    {
        cout << value << endl;
    }
    return 0;
}