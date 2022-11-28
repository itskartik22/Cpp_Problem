class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int count=0;
        for(int i =0;i<nums.size();i++){
            for(int j=0;j<nums.size();j++){
                if(nums[i]==nums[j]){
                    count++;
                }
                if(j+1<nums.size() && nums[j+1]>nums[j]){
                    break;
                }
            }
        }
        return count;
    }
};

//second method using map
//using combination or sum of series

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        map<int,vector<int>> map;
        for(int i=0;i<nums.size();i++){
            map[nums[i]].push_back(i);
        }
        int ans=0;
        for(auto i:map){
            int sum = ((i.second.size()-1)*(i.second.size()))/2;
            ans+=sum;
        }
        return ans;
    }
};
