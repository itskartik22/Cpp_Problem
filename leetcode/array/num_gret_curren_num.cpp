class Solution
{
public:
    int counter(vector<int> nums,int i){
        int count=0;
        for(int j=0;j<nums.size();j++){
            if(nums[j]<nums[i]){
                count++;
            }
        }
        return count;
    }
    vector<int> smallerNumbersThanCurrent(vector<int> &nums)
    {
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++){
            ans.push_back(counter(nums,i));
        }
    }
};