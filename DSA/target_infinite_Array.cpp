#include <iostream>
using namespace std;

int binarySearch(int arr[], int target, int start, int end)
{
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (target == arr[mid])
        {
            return mid;
        }
        else if (target < arr[mid])
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return -1;
}

int infiniteArray(int arr[], int target)
{
    int start = 0;
    int end = 1;
    while (target > arr[end])
    {
        // temporary start and end value is not affected...
        int temp = end + 1;
        // end = end + size of array * 2
        end = end + (end - start + 1) * 2;
        start = temp;
    }
    return binarySearch(arr, target, start, end);
}

int main()
{
    int arr[] = {2, 4, 5, 6, 8, 9, 10, 12, 15, 20, 23, 25, 26, 27, 28, 29, 30, 35, 37, 39, 50, 59, 60};
    int target = 60;
    cout << infiniteArray(arr, target);
    return 0;
}