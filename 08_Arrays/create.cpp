#include <iostream>
using namespace std;

int main()
{
    int marks[4] = {89, 90, 65, 63};
    double money[] = {8989, 879, 90};

    cout << "Size of marks array: " << sizeof(marks) / sizeof(int) << endl;
    cout << "Size of money array: " << sizeof(money) / sizeof(double) << endl;
    return 0;
}