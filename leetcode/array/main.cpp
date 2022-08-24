#include<iostream>
#include<vector>
using namespace std;

    vector<int> shuffle(vector<int> &nums, int n)
    {
        int k = 0;
        vector<vector<int>> vec;
        for (int i = 0; i < 2; i++)
        {
            vector<int> temp;
            do{
                int j = nums[k];
                temp.push_back(nums[k]);
                k++;
            }while(k != n && k != 2*n);
            if(k<2*n){
                k++;
            }
            for(auto& element:temp){
                  cout<<element<<" ";
            }
            vec.push_back(temp);
        }

        vector<int> ans;
        for(int i=0;i<vec.size();i++){
            for(int j=0;j<vec[i].size();j++){
                ans.push_back(vec[j][i]);
            }
        }
        return ans;
    }

    int main(){
        int n=3;
        vector<int> nums {2,5,1,3,4,7};
        vector<int> ans;
        ans=shuffle(nums,n);
        for(int& element : ans){
            cout<<element;
        }
        return 0;
    }