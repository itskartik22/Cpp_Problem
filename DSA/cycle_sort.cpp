#include <iostream>
using namespace std;
int cyclicSort(int *arr, int size)
{
    int i = 0;
    while (i < size)
    {
        if (arr[i] == i + 1)
        {
            i++;
        }
        else
        {
            swap(arr[arr[i] - 1], arr[i]);
        }
    }
}
int main()
{
    int arr[] = {4, 3, 5, 1, 2, 7, 6, 9, 8};
    int size = sizeof(arr) / sizeof(arr[0]);
    cyclicSort(arr, size);
    for (auto val : arr)
        cout << val << " ";
    return 0; /*  */
}