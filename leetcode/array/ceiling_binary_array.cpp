#include <iostream>
using namespace std;
// smallest number i.e greater than equal to terget
int ceilingBinary(int arr[], int target,int n)
{
    int s = 0;
    int e = n - 1;
    int proans = -1;
    while (s <= e)
    {
        //if no smallest number i.e greater than equal to terget...
        if(target>arr[n]){
            return -1;
        }
        int m=s + (e-s)/2;
        if(arr[m]==target){
            return arr[m];
        }
        else if(arr[m]>target){
            e=m-1;
        }
        else{
            s=m+1;
        }
    }
    return arr[s];
}

// Approach 2 -- Storing a greater number preoccured  and print it


// int ceilingBinary(int arr[], int target,int n)
// {
//     int s = 0;
//     int e = n - 1;
//     int proans = -1;
//     while (s <= e)
//     {
//         int m = s + (e - s) / 2;
//         if (arr[m] >= target)
//         {
//             proans = arr[m];
//             e = m-1;
//         }
//         else
//         {
//             s = m + 1;
//         }
//     }
//     return proans;
// }

//Approach 1 --  Applying mathmatical coonditio to get answer


// int ceilingBinary(int arr[], int target,int n)
// {
//     int s = 0;
//     int e = n - 1;
//     while (s <= e)
//     {
//         int m = s + (e - s) / 2;
//         if (arr[m] <= target && target <= arr[m + 1])
//         {
//             return arr[m + 1];
//         }
//         else if (arr[m] < target)
//         {
//             s = m + 1;
//         }
//         else
//         {
//             e = m - 1;
//         }
//     }
//     return -1;
// }

int main()
{
    int arr[] = {2, 3, 5, 9, 14, 16, 18};
    int target;
    cin >> target;
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << ceilingBinary(arr, target, n);
    return 0;
}