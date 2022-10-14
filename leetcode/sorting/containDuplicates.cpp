class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(),num.end());
        for(int i = 0;i<nums.size();i++){
            if(i<nums.size()-1 && nums[i] == nums[i+1]){
                return true;
            }
        }
        return false;
    }
};

    bool containsDuplicate(vector<int>& nums) {
        int Xor;ji
        int counter;
        int i = 0;
        while(i<nums.size()){
            Xor = nums[i];
            counter = 0;
            for(auto num : nums){
                if(Xor^num == 0){
                    counter++
                }
            }
            if(counter >= 2){
                return true;
            }
            i++;
        }      
        return false;
    }