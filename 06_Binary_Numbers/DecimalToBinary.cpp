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
    cout << "Enter the decimal number you want to convert: ";
    cin >> decNum;
    cout << decToBin(decNum);
    return 0;
}