#include <iostream>
using namespace std;

int main()
{
    //Increment / Decrement
    int a = 10;
    int *ptr = &a;

    cout << "ptr = " << ptr << endl;

    // ptr++;
    ptr--;

    cout << "a = " << &a << endl;
    cout << "Updated ptr = " << ptr << endl; //Updated by 4 bits as it is an integer pointer
}