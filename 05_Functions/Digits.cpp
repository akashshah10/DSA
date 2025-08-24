// Calculate sum of digits of a number
#include <iostream>
using namespace std;

int sumOfDigits(int num)
{
    int digitSum = 0;
    while (num > 0)
    {
        int lastDigit = num % 10;
        num /= 10;

        digitSum += lastDigit;
    }
    return digitSum;
}
int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    cout << "Sum: " << sumOfDigits(n);
    return 0;
}