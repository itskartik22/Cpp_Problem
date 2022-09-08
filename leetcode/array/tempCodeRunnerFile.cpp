int firstMissingPositive(vector<int> &nums)
{
    bool find = false;
    int n=nums.size();
    int maxi=nums[0];
    for(int i=0;i<n;i++){
        find=false;
        for(int j=0;j<n;j++){
            maxi = max(maxi,nums[j]);
            if(i+1==nums[j]){
                find=true;
            }
        }
        if(find==false){
            return i+1;
        }
    }
    return maxi+1;
}