//OPtimized
vector<int> twoSum(vector<int> &nums, int target)
{
    vector<int> res;
    unordered_map<int, int> imap;
    unordered_map<int, int>::iterator itr;
    for (int i = 0; i < nums.size(); i++)
    {
        itr=imap.find(target-nums[i]);
        if(itr!=imap.end()){
            res={i,itr->second};
            break;
        }
        imap[nums[i]]=i;
    }
    return res;
}

//Optimized and Brute Force Method
//     vector<int> vecindices(vector<int> &arr, int num1, int num2)
// {
//     vector<int> indices;
//     for (int i = 0; i < arr.size(); i++)
//     {
//         if (num1 == arr[i])
//         {
//             indices.push_back(i);
//             break;
//         }
//     }
//     for (int i = arr.size()-1; i >=0; i--)
//     {
//         if (num2 == arr[i])
//            {
//            indices.push_back(i);
//            break;
//            }
//      }
//      return indices;
// }
//     vector<int> twoSum(vector<int> & nums, int target)
//     {
//         vector<int> arr = nums;
//         sort(nums.begin(), nums.end());
//         vector<int> res;
//         int i = 0, j = nums.size() - 1;
//         while (i < j)
//         {
//             int sum = nums[i] + nums[j];
//             if (sum > target)
//             {
//                 j--;
//             }
//             else if (sum < target)
//             {
//                 i++;
//             }
//             else
//             {
//                 res = vecindices(arr,nums[i],nums[j]);
//                 break;
//             }
//         }
//         return res;
//     }



// Brute Force Time complexity O(n^2)
// vector<int> twoSum(vector<int> &nums, int target)
// {
//     vector<int> res;
//     for (int i = 0; i < nums.size(); i++)
//     {
//         for (int j = i + 1; j < nums; j++;)
//         {
//             if (nums[i] + nums[j] == target)
//                 res = {i, j};
//         }
//     }
//     return res;
// }