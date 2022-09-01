// #include <bits/stdc++.h>
#include <iostream>
using namespace std;

int linearSearch(int arr[10], int target, int n)
{
    if (n== 0)
    {
        return -1;
    }
    for (int index = 0; index < n; index++)
    {
        // check target in given array
        if (arr[index] == target)
        {
            return index;
        }
    }
    // if not get target in any index
    // return -1
    return -1;
}

int main(int argc, char const *argv[])
{
    int target;
    cin >> target;
    int arr[] = {2, 4, 6, 8, 0, 12, 10, 34, 7, 13};
    int n = sizeof(arr) / sizeof(arr[0]);  //Size of array
    cout << linearSearch(arr, target, n);
    return 0;
}
