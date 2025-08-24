#include <iostream>
using namespace std;

int sum(int a, int b) //--> Parameters
{
    int s = a + b;
    return s;
}

int min(int a, int b)
{
    if (a < b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
int sumN(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    return sum;
}

int main()
{
    cout << sum(10, 15) << endl; //-->Arguments
    cout << min(5, 10) << endl;
    cout << sumN(10);
    return 0;
}