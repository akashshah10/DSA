#include <iostream>
#include <vector>
using namespace std;

int Search(vector<int> &A, int target)
{
    int st = 0, end = A.size() - 1;
    while(st <= end)
    {
        int mid = st + (end - st)/2;

        if(A[mid] == target)
            return mid;

        else if(A[st] <= A[mid])
        {
            if(target >= A[st] && A[mid] > target)
            {
                end = mid - 1;
            }
            else{
                st = mid + 1;
            }
        }
        else{
            if(target > A[mid] && A[end] >= target)
            {
                st = mid + 1;
            }
            else{
                end = mid - 1;
            }
        }
    }
    return -1;
}

int main()
{
    vector<int> vec = {6, 7, 0, 1, 2, 3, 4, 5};
    int target = 0;
    cout << Search(vec, target);
    return 0;
}