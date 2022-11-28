class Solution
{
public:
    string removeOccurrences(string &s, string &part)
    {
        int sub_str_len = part.length();
        bool avail=true;
        while(avail){
            std::size_t found=s.find(part);
            if(found!=std::string::npos){
                s.erase(found,sub_str_len);
            }
            else{
                avail=false;
            }
        }
        return s;
    }
};