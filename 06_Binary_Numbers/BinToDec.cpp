#include <iostream>
using namespace std;

int BinaryToDecimal(int binNum)
{
    int remainder, ans = 0, power = 1;
    while (binNum > 0)
    {
        remainder = binNum % 10;
        ans += (remainder * power);
        binNum /= 10;
        power *= 2;
    }

    return ans;
}

int main()
{
    int binNum = 101;
    cout << BinaryToDecimal(binNum) << endl;
    return 0;
}
