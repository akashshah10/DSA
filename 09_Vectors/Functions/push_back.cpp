#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec;
    cout << "Before push_back: " << vec.size() << endl;

    vec.push_back(22);
    vec.push_back(11);
    vec.push_back(33);
    cout << "After push_back size: " << vec.size() <<endl;

    for (int value : vec)
    {
        cout << value << endl;
    }
    return 0;
}