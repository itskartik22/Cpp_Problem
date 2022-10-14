class Solution {
public:
    int binarySearch(vector<int>& vec,int target){
        int s = 0;
        int e = vec.size()-1;
        while(s<=e){
            int m = s + (e - s)/2;
            if(vec[m]==target){
                return m;
            }
            else if(vec[m]<target){
                s = m + 1;
            }
            else{
                e = m - 1;
            }
        }
        return -1;
    }
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        sort(nums2.begin(),nums2.end());
        for(int num1 : nums1){
            int index = binarySearch(nums2,num1);
            if(index != -1){
            ans.push_back(nums2[index]);
            nums2.erase(nums2.begin() + index);
            }
        }
        return ans;      
    }
};

//Two pointer Concept(i & j)
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        int i = 0, j = 0;
        vector<int> res;
        while(i < nums1.size() && j < nums2.size()){
            if(nums1[i] == nums2[j]){
                res.push_back(nums1[i]);
                i++;
				j++;
            }
            else if(nums1[i] < nums2[j]){
                i++;
            }
            else if(nums1[i] > nums2[j]){
                j++;
            }
        }
        return res;
    }