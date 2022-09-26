/**this algorith is based on selecting a element from left side and comparing it with other remaining 
 * element left in it.Searching a element which is lesser than selected one and swap it.If we did not any
 * element ,it means that the selected element is at right place**/
// Time complexity = O(n^2)
#include <iostream>
using namespace std;
int selectionSort(int arr[], int n) //function called
{
    for (int i = 0; i < n; i++)
    {
        int mini = arr[i];  //storing initial number to compare
        int index = i; //storing initial index to use it after
        // bool get = false;
        for (int j = i+1; j < n; j++)
        {
            if (arr[j] < maxi)
            {
                // get = true;
                mini = arr[j];
                index = j;
            }
        }
        // if (get)
        // {
            swap(arr[i], arr[index]);
        // }
    }
}
int main()
{
    int arr[] = {4, 5, 1, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    selectionSort(arr, n);
    for (auto &element : arr)
    {
        cout << element << " ";
    }
    return 0;
}