#include <iostream>
#include <vector>
using namespace std;

int firstMissingPositive(vector<int> &nums)
{
    bool find = false;
    int n=nums.size();
    int maxi=0;
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
int main(){
    vector<int> nums={1,2,3,4,7,5,6,8,9,10,-3,};
    cout<<firstMissingPositive(nums);
    return 0;
}