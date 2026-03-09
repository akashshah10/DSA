#include <iostream>
using namespace std;

void changeA(int &b){  // Pass by reference using Alias
    b = 10;
}
int main()
{
    int a = 5;
    changeA(a);
    cout << a << endl;
}