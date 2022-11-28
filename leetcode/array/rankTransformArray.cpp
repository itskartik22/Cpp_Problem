//Optimization Code
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> A(arr);
        sort(A.begin(), A.end());
        unordered_map<int, int> rank;
        for (int& a : A)
            rank.emplace(a, rank.size() + 1);
        for (int i = 0; i < A.size(); ++i)
            A[i] = rank[arr[i]];
        return A;
    }
// vector<int> arrayRankTransform(vector<int> &arr)
// {
//     vector<int> nums = arr;
//     sort(nums.begin(), nums.end());
//     map<int, int> orderMap;
//     int rank = 1;
//     for (int i = 0; i < nums.size(); i++)
//     {
//         if (i < nums.size()-1 && nums[i + 1] == nums[i])
//         {
//             orderMap[nums[i]] = rank;
//             rank--;
//         }
//         else
//         {
//             orderMap[nums[i]] = rank;
//         }
//         rank++;
//     }
//     for (int i = 0; i < arr.size(); i++)
//     {
//         arr[i]=orderMap[arr[i]];
//     }
//     return arr;
// }
// //Unoptimized code
// vector<int> arrayRankTransform(vector<int> &arr)
// {
//     set<int> st(arr.begin(),arr.end());
//     map<int, int> orderMap;
//     int rank=1;
//     for(auto itr=st.begin(),itr!=st.end();itr++){
//         orderMap[itr]=rank++;
//     }
//     for (int i = 0; i < arr.size(); i++)
//     {
//         arr[i]=orderMap[arr[i]];
//     }
//     return arr;
// }
// //Brute Force Method-----
// vector<int> arrayRankTransform(vector<int> &arr)
// {
//     vector<int> nums = arr;
//     vector<int> ans;
//     sort(nums.begin(), nums.end());
//     map<int, int> orderMap;
//     map<int, int>::iterator itr;
//     int counter = 1;
//     for (int i = 0; i < nums.size(); i++)
//     {
//         if (i < nums.size() && nums[i + 1] == nums[i])
//         {
//             orderMap[nums[i]] = counter;
//             counter--;
//         }
//         else
//         {
//             orderMap[nums[i]] = counter;
//         }
//         counter++;
//     }
//     for (int i = 0; i < arr.size(); i++)
//     {
//         ans.push_back(orderMap[arr[i]].second);
//     }
//     return ans;
// }