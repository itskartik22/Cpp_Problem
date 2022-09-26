// Efficient as well as reduce code length
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        //making unordered_set of num1
        unordered_set<int> m(nums1.begin(), nums1.end());
        vector<int> res;
        // for iterating through all the element of nums2
        for (auto a : nums2)
            if (m.count(a)) {  //count() funtion check the presence of element in m and return 1 or 0
                res.push_back(a);
                m.erase(a);  //erase all the element of value a in unordered_set
            }
        return res;
    }
};
// Efficient way by using stl c++
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> us1 = {nums1.begin(),nums1.end()};
        unordered_set<int> us2 = {nums2.begin(),nums2.end()};
        vector<int> ans;
        for(auto val : us1){
            if(us2.find(val)!=us2.end()){
                ans.push_back(val);
            }
        }
        return ans;
    }
};
//Not efficient method...
class Solution
{
public:

// function to check inputing number in ans is already present or not
    bool repeat_value(vector<int> &vec, int target)
    {
        if (vec.size() == 0)
        {
            return false; //size is zero  - No element in ans vec
        }
        for (int i = 0; i < vec.size(); i++)
        {
            if (target == vec[i])
            {
                return true; //true - element is present there
            }
        }
        return false;
    }
    vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
    {
        if (nums1.size() < nums2.size())
        {
            vector<int> temp;
            temp = num1;
            num1 = num2;
            num2 = temp;
        }

        vector<int> ans;
        for (int i = 0; i < nums2.size(); i++)
        {
            for (int j = 0; j < nums1.size(); j++)
            {
                //condition checking where jth element of nums1 is present in ith element of num2
                //another condition is to check whether inserting element in ans is already present or not..
                if (nums2[i] == nums1[j] && repeat_value(ans, nums2[i]) == false)
                {
                    ans.push_back(nums2[i]);
                }
            }
        }
        return ans;
    }
};

