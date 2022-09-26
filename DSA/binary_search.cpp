#include <iostream>
using namespace std;
int binarySearch(int arr[], int target, int n)
{
    int s = 0;
    int e = n;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (target > arr[mid])
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {-18,
                 -12,
                 -8,
                 -1,
                 2,
                 7,
                 15,
                 19,
                 23,
                 25,
                 29,
                 45,
                 50,
                 50};
    int target = 45;
    int size = sizeof(arr) / sizeof(arr[0]);
    cout <<binarySearch(arr,target,size-1);
    return 0;
}