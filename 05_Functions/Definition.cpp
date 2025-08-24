#include <iostream>
using namespace std;

// Funtion definition
int printHello()
{
    cout << "Hello World!" << endl;
    return 10;
}

int main()
{
    int value = printHello();          //--> Function call/ invoke
    cout << "val = " << value << endl; // --> prints the return value of function printHello()
    int a = 10;
    int b = 30;
    int sum = a + b;
    cout << sum;
    return 0;
}
