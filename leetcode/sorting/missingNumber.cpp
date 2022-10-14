//Optimized
//Applying Cyclic Sort Algorithm
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int x=nums.size();  //imaginary value i.e end value
        nums.push_back(x);   //increasing size of vector i.s sapce for missing number
        int i = 0;
        while(i<nums.size()){
            if(nums[i]==i){
                i++;    //moving index
            }
            else if(nums[i]==nums[nums[i]]){  //if end value is already present at particular index.
                nums[i]--;  //decrease assumed value by one
                x=nums[i];  //it may be the ans;
            }
            else{
                swap(nums[i],nums[nums[i]]); //
            }
        }
        return x;
    }
};

//Unoptimized code
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        for(int i =0;i<nums.size();i++){
            bool check = false;
            for(int j=0;j<nums.size();j++){
                if(i==nums[j]){
                    check=true;
                    break;
                }
            }
            if(!check){
                return i;
            }
        }
        return nums.size();
    }
};