#include <iostream>
using namespace std;
int decToBin(int decNum)
{
    int ans = 0, pow = 1;
    while (decNum > 0)
    {
        int remainder = decNum % 2;
        decNum /= 2;
        ans += (remainder * pow);
        pow *= 10;
    }
    return ans;
}
int main()
{
    int decNum;
    cout << "Enter the range of n you want to convert: ";
    cin >> decNum;

    for (int i = 0; i <= decNum; i++)
    {
        cout << decToBin(i) << endl; // --> Converts all numbers to binary from 0 to the given number
    }

    return 0;
}