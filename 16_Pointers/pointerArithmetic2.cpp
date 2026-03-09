#include <iostream>
using namespace std;

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    cout << arr << endl;  // Gives the address of the 0th index
    cout << *arr << endl; // Dereferencing the pointer arr
    cout << *(arr+1) << endl; // updates the address by 4 bits and dereferences to the address
    cout << *(arr+2) << endl; // updates the address by 8 bits and dereferences to the address
}