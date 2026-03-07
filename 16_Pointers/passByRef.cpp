#include <iostream>
using namespace std;

// void changeA(int a) //-->Pass by value
//     {
//         a = 20;
//     }

void changeA(int *ptr) //-->Pass by reference using pointers
{
    *ptr = 20;
}

int main()
{
    int a = 10;

    changeA(&a);

    cout << "Inside main fxn : "<< a << endl;
    return 0;
}
    