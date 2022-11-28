class Solution {
public:
    vector<string> permutation(string &s1){
        vector<string> per;
        for(int i=0;i<s1.length();i++){
            char temp = s1[0];
            for(int i=0;i<s1.length()-1;i++){
                swap(s1[i],s1[i+1]);
            }
            s1[s1.length()-1]=temp;
            per.push_back(s1);
        }
        return per;
    }
    bool checkInclusion(string &s1, string &s2) {
        auto per=permutation(s1);
        for(int i=0;i<per.size();i++){
            std::size_t found=s2.find(per[i]);
            if(found!=std::string::npos) return true;
        }
        return false;
    }
};