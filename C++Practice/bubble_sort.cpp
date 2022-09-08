#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n-1; i++)
    {
    bool swaped = true;
        for (int j = 1; j < n-i; j++)
        {
            if (arr[j - 1] > arr[j])
            {
                swap(arr[j - 1], arr[j]);
                swaped = false;
            }
        }
        if(swaped){
            break;
        }
    }
    // for(int i=0;i<n;i++)
    //     cout << arr[i] << " ";
}
int main()
{
    // int arr[] = {1};
    int arr[] = {-32,-2,3,6,10,12,49};
    int size = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, size);
    for (int &a : arr)
        cout<< a << " ";
    return 0;
}