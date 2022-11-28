class Solution
{
public:
    string freqAlphabets(string s)
    {
        std::string result;
        for(int i=0;i<s.length();i++){
            if(i+2<s.length()-1 && s[i+2]=='#'){
                result += 96 + stoi(s.substr(i,2));
                i+=2;
            }
            else{
                result += 96 + stoi(s.substr(i,1));
            }
        }
        return result; 
    }
};

class Solution {
public:
    string freqAlphabets(string s) {
        string ans;

        for (int i{0}; i<s.length(); ++i) {

            // if (i+2)th position is # then the prveious two integers point to a single character
            if (i+2 < s.length() && s[i+2] == '#') {
                // stoi converts strings to numbers (not ascii code)
                // we add 96 to the numbers [1+96=97, where 97 is ascii for 'a', then 98 for 'b' & so on]
                ans+=stoi(s.substr(i, 2))+96;
                // update the index i
                i+=2;
            // in this case observe that we're dealing with a single character not a string
            // benefit? we convert it to ascii directly. ascii for 1? 49
            // add 48, we get 97 which is ascii for 'a'
            // add 48 to 2, we get ascii for 'b' & so on..
            } else ans+=s[i]+48;
        }

        return ans;
    }
};