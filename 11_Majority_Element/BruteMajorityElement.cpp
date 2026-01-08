#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // int arr[] = {1,2,1,1,2};
    // int n = 5;
    // for(int i = 0; i < n; i++)
    // {
    //     int count = 0;
    //     for(int j = 0; j < n; j++)
    //     {
    //         if(arr[i] == arr[j])    --> Using Array 
    //         {
    //             count++;
    //         }
    //     }
    //     if(count > n/2)
    //     {
    //         cout << arr[i];
    //         break;
    //     }
    // }

    vector<int> vec = {1,2,1,1,2};
    int n = vec.size();
    for(int val: vec)        // Using the values of vector without indexing
    {
        int freq = 0;       

        for(int el: vec)     // Taking the values of elements from the vector
        {
            if(el == val)
            {
                freq++;
            }
        }
        if(freq > n/2)
        {
            cout << val;
            break;           // Breaks when the element is found. It stops multiple print of the same element
        }
    }
    return 0;
}
