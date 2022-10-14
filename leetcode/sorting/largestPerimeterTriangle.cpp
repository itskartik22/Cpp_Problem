    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int k = n-1;
        int j = k-1;
        int i = j-1;
        while(i>=0){
            if((nums[i]+nums[j])>nums[k]){
                return nums[i]+nums[j]+nums[k];
            }
            k--,j--,i--;
        }
        return 0;
    }