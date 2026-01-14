// Binary Exponentiation
// For calculating a power of a big exponential value, the time complexity will be O(n)-Linear, but leetcode only accpets values upto 10^8. So to solve this problem what we do is, we solve it by binary exponentiation(O(logn)).
//1-->We calculate the binary of the given exponent
//2-->If the current power is odd (ans = ans * x)
//3-->Now square the x
//3-->Lastly divide the binForm/2 to move to next binary step
#include <iostream>
using namespace std;

double myPow(double x,int n){

    if(n == 0) return 1;
    if(x == 1) return 1;
    if(x == 0) return 0;
    if(x == -1 && n % 2 == 0) return 1;
    if(x == -1 && n % 2 != 0) return -1;

    long binForm = n;
    if(binForm < 0)
    {
        x = 1/x;
        binForm = -binForm;
    }

    double ans = 1.0;
    while(binForm > 0)
    {
        if(binForm % 2 == 1)
        {
            ans *= x;
        }
        x *= x;
        binForm /= 2;
    }
    return ans;
}

int main()
{
    int x,n;
    cout << "Enter the base: ";
    cin >> x;

    cout << "Enter the exponent: ";
    cin >> n;
    
    cout << myPow(x,n);

    return 0;

}