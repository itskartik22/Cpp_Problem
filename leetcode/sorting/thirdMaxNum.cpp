class Solution
{
public:
    int thirdMax(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        if (nums.size() >= 3){
            return nums[nums.end()-3];
        }
        return nums[nums.end()-1];
    }
};