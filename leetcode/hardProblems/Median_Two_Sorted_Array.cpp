//Cut for bodth vector at sum point and make in left and right part..
//Cutting point should be there where it makes sum of number of element in first part of nums1 
// and first part of nums2 is equal to half of (n1 + n2)
//Here we know the element are sorted .
//So in each vector left element of cutting point is less than right element
//So to make the every element of first half we need to do cross check for each
//So Here we go.....
class Solution
{
public:
    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
    {
        int n1 = nums1.size();
        int n2 = nums2.size();
        if (n1 > n2) //we need smaller or equal vector in vec1.So reverse nums1 and nums2
        {
            return findMedianSortedArrays(nums2, nums1); //return to exchange vectors
        }
        int low = 0;  //starter pointing in first half
        int high = n1; //ender pointing in second half
        while (low <= high) //just statement as binary search
        {
            int mid1 = (low + high) / 2;  // mid1 cutting point in upper vector 
            int mid2 = (n1 + n2 + 1) / 2 - mid1; //mid2 cutting point in lower vector
            int L1 = mid1 == 0 ? INT_MIN : nums1[mid1 - 1]; //value at before cutting point in nums1
            int L2 = mid2 == 0 ? INT_MIN : nums2[mid2 - 1]; //value at after cutting point in nums1
            int R1 = mid1 == n1 ? INT_MAX : nums1[mid1];  //similar as upper mention
            int R2 = mid2 == n2 ? INT_MAX : nums2[mid2];
//if below condition satifies we get element in left half lower than every element in right half including
//both left and right path
            if (L1 <= R2 && L2 <= R1)
            {
                //for even number n1+n2
                if ((n1 + n2) % 2 == 0)
                {
                    return (max(L1, L2) + min(R1, R2)) / 2.0;
                }
                else
                {
                    return max(L1, L2);
                }
            }
            else if(L1>R2){
                high = mid1 - 1; //moving vector toward right 
            }
            else{
                low = mid1 + 1;  //moving vector toward left
            }
        }
        return 0.0;
    }
};

// Brute Force Way

// #include <iostream>
// #include <vector>
// #include <iterator>
// using namespace std;

// double Median(vector<int> nums)
// {
//     int size = nums.size();
//     double ans;
//     int i = size / 2;
//     if (size % 2 == 0)
//     {
//         ans = (nums[i - 1] + nums[i]) / 2.0;
//     }
//     else
//     {
//         ans = nums[i];
//     }
//     return ans;
// }

// vector<int> MergingArray(vector<int> nums1, vector<int> nums2, int m, int n)
// {
//     int start = 0;
//     int end = m - 1;
//     int i = n - 1;
//     if (n == 0)
//     {
//         return nums1;
//     }
//     else if (m == 0)
//     {
//         return nums2;
//     }
//     else if (nums1 == nums2)
//     {
//         return nums1;
//     }
//     while (start <= end)
//     {
//         int mid = start + (end - start) / 2;
//         int target = nums2[i];
//         if (i < 0)
//         {
//             break;
//         }
//         else if (nums1[end] < target)
//         {
//             nums1.push_back(target);
//             i--;
//             end = end + 1;
//             start = 0;
//         }
//         else if (nums1[start] > target)
//         {
//             nums1.insert(nums1.begin(), target);
//             i--;
//             start = 0;
//             end = start;
//         }
//         else if (end > mid && nums1[mid] <= target && target <= nums1[mid + 1])
//         {
//             nums1.insert(nums1.begin() + mid + 1, target);
//             i--;
//             start = 0;
//             end = mid + 1;
//         }
//         else if (target < nums1[mid])
//         {
//             end = mid;
//         }
//         else if (target > nums1[mid])
//         {
//             start = mid + 1;
//         }
//     }
//     return nums1;
// }

// int main()
// {
//     // vector<int> nums1 = {0,3};
//     // vector<int> nums2 = {1, 5};
//     // vector<int> nums1 = {0, 0, 0, 0, 0};
//     // vector<int> nums2 = {-1, 0, 0, 0, 0, 0, 1};
//     vector<int> nums1 = {0, 3, 4, 5, 6, 8, 10};
//     vector<int> nums2 = {-1, 0, 0, 1, 2, 7, 9};
//     int m = nums1.size();
//     int n = nums2.size();
//     vector<int> vec;
//     if (m >= n)
//     {
//         vec = MergingArray(nums1, nums2, m, n);
//     }
//     else
//     {
//         vec = MergingArray(nums2, nums1, n, m);
//     }
//     cout << Median(vec);
//     return 0;
// }