#include <iostream>
using namespace std;
int orderAgnosticBinarySearch(int arr[], int target, int n)
{
    int s = 0;
    int e = n;
    bool asec;
    if (arr[s] < arr[e])
    {
        asec = true;
    }
    else
    {
        asec = false;
    }
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }
        if (asec)
        {
            if (target > arr[mid])
            {
                s = mid + 1;
            }
            else
            {
                e = mid - 1;
            }
        }
        else
        {
            if (target < arr[mid])
            {
                s = mid + 1;
            }
            else
            {
                e = mid - 1;
            }
        }
    }
    return -1;
}

int main()
{
    // int arr[] = {-18,
    //              -12,
    //              -8,
    //              -1,
    //              2,
    //              7,
    //              15,
    //              19,
    //              23,
    //              25,
    //              29,
    //              45,
    //              50,
    //              50};

    int arr[] = {50,
                 46,
                 44,
                 35,
                 30,
                 23,
                 19,
                 15,
                 7,
                 2,
                 -1,
                 -8,
                 -12,
                 -18};
    int target = -8;
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << orderAgnosticBinarySearch(arr, target, size - 1);
    return 0;
}