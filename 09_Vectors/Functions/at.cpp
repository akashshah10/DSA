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

    for (int value : vec)
    {
        cout << value << " ";
    }
    cout << endl;

    cout << vec.at(1) << endl;

    return 0;
}