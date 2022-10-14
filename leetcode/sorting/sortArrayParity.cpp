class Solution {
public:
//Two Pointer Method....
    vector<int> sortArrayByParity(vector<int>& nums) {
        int i=0;
        int j=nums.size()-1;
        while(i<j){
            if(nums[j]%2==0 && nums[i]%2!=0){
                swap(nums[i],nums[j]);
                i++;
                j--;
            }
            else if(nums[i]%2==0 || (nums[i]%2==0 && nums[j]%2==0)){
                i++;
            }
            else if((nums[i]%2!=0 && nums[j]%2!=0) || nums[j]%2!=0){
                j--;;
            }
        }      
        return nums;
    }
};