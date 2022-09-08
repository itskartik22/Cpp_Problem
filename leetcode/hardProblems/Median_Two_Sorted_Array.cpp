#include <iostream>
#include <vector>
#include <iterator>
using namespace std;

double Median(vector<int> nums)
{
    int size = nums.size();
    double ans;
    int i = size / 2;
    if (size % 2 == 0)
    {
        ans = (nums[i - 1] + nums[i]) / 2.0;
    }
    else
    {
        ans = nums[i];
    }
    return ans;
}

vector<int> MergingArray(vector<int> nums1, vector<int> nums2, int m, int n)
{
    int start = 0;
    int end = m - 1;
    int i = n - 1;
    if (n == 0)
    {
        return nums1;
    }
    else if (m == 0)
    {
        return nums2;
    }
    else if (nums1 == nums2)
    {
        return nums1;
    }
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        int target = nums2[i];
        if (i < 0)
        {
            break;
        }
        else if (nums1[end] < target)
        {
            nums1.push_back(target);
            i--;
            end = end + 1;
            start = 0;
        }
        else if (nums1[start] > target)
        {
            nums1.insert(nums1.begin(), target);
            i--;
            start = 0;
            end = start;
        }
        else if (end > mid && nums1[mid] <= target && target <= nums1[mid + 1])
        {
            nums1.insert(nums1.begin() + mid + 1, target);
            i--;
            start = 0;
            end = mid + 1;
        }
        else if (target < nums1[mid])
        {
            end = mid;
        }
        else if (target > nums1[mid])
        {
            start = mid + 1;
        }
    }
    return nums1;
}

int main()
{
    // vector<int> nums1 = {0,3};
    // vector<int> nums2 = {1, 5};
    // vector<int> nums1 = {0, 0, 0, 0, 0};
    // vector<int> nums2 = {-1, 0, 0, 0, 0, 0, 1};
    vector<int> nums1 = {0, 3, 4, 5, 6, 8, 10};
    vector<int> nums2 = {-1, 0, 0, 1, 2, 7, 9};
    int m = nums1.size();
    int n = nums2.size();
    vector<int> vec;
    if (m >= n)
    {
        vec = MergingArray(nums1, nums2, m, n);
    }
    else
    {
        vec = MergingArray(nums2, nums1, n, m);
    }
    cout << Median(vec);
    return 0;
}
// class Solution
// {
// public:
//     double Median(vector<int> nums)
//     {
//         int size = nums.size();
//         double ans;
//         int i = size / 2;
//         if (size % 2 == 0)
//         {
//             ans = (nums[i - 1] + nums[i]) / 2.0;
//         }
//         else
//         {
//             ans = nums[i];
//         }
//         return ans;
//     }

//     vector<int> MergingArray(vector<int> nums1, vector<int> nums2, int m, int n)
//     {
//         int start = 0;
//         int end = m - 1;
//         int i = n - 1;
//         if (n == 0)
//         {
//             return nums1;
//         }
//         else if (m == 0)
//         {
//             return nums2;
//         }
//         while (start <= end)
//         {
//             int mid = start + (end - start) / 2;
//             int target = nums2[i];
//             if (i <= 0)
//             {
//                 break;
//             }
//             else if (nums1[end] < target)
//             {
//                 nums1.push_back(target);
//                 i--;
//                 end = end + 1;
//                 start = 0;
//             }
//             else if (nums1[start] > target)
//             {
//                 nums1.insert(nums1.begin(), target);
//                 i--;
//                 start = 0;
//             }
//             else if (end > mid && nums1[mid] < target && target < nums1[mid + 1])
//             {
//                 nums1.insert(nums1.begin() + mid + 1, target);
//                 i--;
//                 start = 0;
//                 end = mid + 1;
//             }
//             else if (target < nums1[mid])
//             {
//                 end = mid;
//             }
//             else if (target > nums1[mid])
//             {
//                 start = mid + 1;
//             }
//         }
//         return nums1;
//     }

//     double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
//     {
//         int m = nums1.size();
//         int n = nums2.size();
//         vector<int> vec = MergingArray(nums1, nums2, m, n);
//         return Median(vec);
//     }
// };