#include <iostream>
using namespace std;

int ceilingBinary(int arr[], int target,int n)
{
    int s = 0;
    int e = n - 1;
    while (s <= e)
    {
        int m = s + (e - s) / 2;
        if (arr[m] <= target && target <= arr[m + 1])
        {
            return arr[m + 1];
        }
        else if (arr[m] < target)
        {
            s = m + 1;
        }
        else
        {
            e = m - 1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {2, 3, 5, 9, 14, 16, 18};
    int target;
    cin >> target;
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << ceilingBinary(arr, target, n);
    return 0;
}