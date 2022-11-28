class Solution {
public:
    string defangIPaddr(string address) {
        string ans;
        int n = address.length();
        for(int i=0;i<n;i++){
            if(address[i]=='.'){
                ans.push_back("[.]");
            }
            else{
                ans.push_back(address[i]);
            }
        }
        return ans;
    }
};