// There is an integer array nums sorted in non-decreasing order (not necessarily with distinct values).
// work on error in submission

#include <bits/stdc++.h>
using namespace std;

// to return pivot element index in the called function
int returnPivot(vector<int> &arr, int start, int end)
{
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        // four cases are here
        if (mid < end && arr[mid] > arr[mid + 1]) // to remove index bound error mid < end
        {
            return mid;
        }
        else if (mid > start && arr[mid] < arr[mid - 1]) // to remove index bound error mid > start
        {
            return mid - 1;
        }

        else if (arr[mid] == arr[start] && arr[mid] == arr[end])
        {
            // first check either start is pivot or not
             if (end>start && arr[start] > arr[start + 1])
            {
                return start;
            }
            start++;

            // check is end-1 is pivot or not
            if(end > start && arr[end-1]>arr[end]){
                return end-1;
            }
            end--;
        }
        else if (mid < end && arr[mid] <= arr[mid + 1] && arr[mid] >= arr[start])
        {
            start = mid + 1;
        }
        else if (mid > start && arr[mid] <= arr[mid + 1] && arr[mid] <= arr[start])
        {
            end = mid - 1;
        }
        else
        {
            break;
        }
    }
    // returning -1 if dont get pivot element
    return -1;
}
// Normal Binary Search Function
int binarySearch(vector<int> &arr, int target, int start, int end)
{
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] > target)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    // returning -1 if don't get target element
    return -1;
}
// target searching function by calling another function
int searchTarget(vector<int> &arr, int target)
{
    int pos_diver = returnPivot(arr, 0, arr.size() - 1);
    // if get pivot element then below if statement will execute
    if (pos_diver != -1)
    {
        if (arr[0] <= target)
        {
            return binarySearch(arr, target, 0, pos_diver); // for the first part of the array
        }
        else
        {
            return binarySearch(arr, target, pos_diver + 1, arr.size() - 1); // for the second part of array
        }
    }
    // if don't pivot element means array is not rotated
    else
    {
        return binarySearch(arr, target, 0, arr.size() - 1);
    }
}

int main()
{
    // vector<int> arr = {4,5,6,6,7,0,1,2,4,4};
    vector<int> arr = {3,5,2,2,2,};
    // vector<int> arr = {1,1,1,1,1,1,1,1,1,1,1,1,1,2,1,1,1,1,1};

    int target = 3;
    cout << searchTarget(arr, target);
    return 0;
}

