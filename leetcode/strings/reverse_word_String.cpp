//optiization
class Solution
{
public:
string reverseWords(string &s)
        std::vector<std::string> words;
        std::string word;
        for(int i=0;i<s.size();i++){
            if(s[i]==' '){
                continue;
            }
            int len_word=0;
            while(i+len_word<s.size() && s[i+len_word]!=' '){
                len_word++;
                word+=s[i+len_word];
            }
            words.push_back(word);
            i+=len_word;
        }
        for(auto st:words){
            result=st+" "+result;
        }
        result.pop_back();
        return result;
};
//Unoptimized

class Solution
{
public:
string reverseWords(string &s)
        string result;
        for(int i=0;i<s.size();i++){
            if(s[i]==' '){
                continue;
            }
            int len_word=0;
            while(i+len_word<s.size() && s[i+len_word]!=' '){
                len_word++;
            }
            result = s.substr(i,len_word) + " " + result;
            i+=len_word;
        }
        result.pop_back();
        return result;
};
