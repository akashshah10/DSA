#include <iostream> 
#include <vector>
using namespace std;

int binarySearch(vector<int> arr, int tar, int st,int end)
{
    if(st <= end)
    {
        int mid = st + (end - st)/2;
        if(arr[mid] > tar)
        {
            return binarySearch(arr, tar, st, mid-1);
        }
        else if(arr[mid] < tar)
        {
            return binarySearch(arr, tar, mid+1, end);
        }
        else{
            return mid;
        }
    }
    return -1;
}
int main()
{
    vector<int> arr = {-3, 0, 7, 10, 15, 20};
    int tar = 20;
    int st = 0, end = arr.size() - 1;
    cout << binarySearch(arr,tar,st,end) << endl;   
    return 0;
}