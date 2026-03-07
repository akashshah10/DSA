<<<<<<< HEAD
// Calculate sum of n natural numbers
#include <iostream>
using namespace std;

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
    cout << sumN(10);
    return 0;
=======
// Calculate sum of n natural numbers
#include <iostream>
using namespace std;

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
    cout << sumN(10);
    return 0;
>>>>>>> 299e1a5 (DSA)
}