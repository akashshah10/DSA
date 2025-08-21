// condition? statement1:statement2
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number you want to check: ";
    cin >> n;
    cout << (n >= 0 ? "positive" : "negative") << endl;
    return 0;
}