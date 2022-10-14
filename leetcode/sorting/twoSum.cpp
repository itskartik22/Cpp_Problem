vector<int> twoSum(vector<int> & nums, int target)
    {
        unordered_map<int,int> hash;
        for(int i=0;i<nums.size();i++){
            hash.insert(pair<int,int>(nums[i],i));
        }
        vector<int> arr = nums;
        sort(nums.begin(), nums.end());
        vector<int> res;
        int i = 0, j = nums.size() - 1;
        while (i < j)
        {
            int sum = nums[i] + nums[j];
            if (sum > target)
            {
                j--;
            }
            else if (sum < target)
            {
                i++;
            }
            else
            {
                res = {hash.find(nums[i]),hash.find(nums[j])};
                break;
            }
        }
        return res;
    }

    //Another method
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