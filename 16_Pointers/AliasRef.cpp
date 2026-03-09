#include <iostream>
using namespace std;

void changeA(int &b){
    b = 10;
}
int main()
{
    int a = 5;
    changeA(a);
    cout << a << endl;
}