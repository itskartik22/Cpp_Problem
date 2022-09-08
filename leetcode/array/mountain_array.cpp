class Solution {
public:
    int peakIndexInMountainArray(vector<int> &arr)
    {
        int size = arr.size();
        int start = 0;
        int end = size - 1;
        int potent_ans = -1;
        while (start < end)
        {
            int mid = start + (end - start) / 2;
            if (arr[mid]>arr[mid+1])  //may mid be possible ans but not sure.Behind ther emay be greater value
            {
                potent_ans=mid;
                end = mid;
            }
            else if(arr[mid]<arr[mid+1])  //there exist a value greater than mid value
            {
                start = mid + 1;
            }
        }
        return end;
    }
};


// #include <iostream>
// #include <vector>
// using namespace std;
// int peakIndexInMountainArray(vector<int> &arr)
// {
//     int size = arr.size();
//     int start = 0;
//     int end = size - 1;
//     while (start <= end)
//     {
//         int mid = start + (end - start) / 2;
//         if (arr[mid - 1] < arr[mid] && arr[mid] > arr[mid + 1])
//         {
//             return mid;
//         }
//         else if (arr[mid - 1] > arr[mid] && arr[mid] > arr[mid + 1])
//         {
//             end = mid - 1;
//         }
//         else
//         {
//             start = mid + 1;
//         }
//     }
//     return -1;
// }

// int main()
// {
//     vector<int> arr = {3, 5, 3, 2, 1, 0};
//     cout << peakIndexInMountainArray(arr);
//     return 0;
// }