#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec;
    cout << "Before push_back size: " << vec.size() << endl;
    cout << "Before push_back capacity: " << vec.capacity() << endl;

    vec.push_back(22);
    vec.push_back(11);
    vec.push_back(11);
    vec.push_back(4);
    vec.push_back(6);

    cout << "Final size: " << vec.size() << endl;
    cout << "Final capacity: " << vec.capacity() << endl;

    return 0;
}