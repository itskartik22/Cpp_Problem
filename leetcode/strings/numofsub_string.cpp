int numOfStrings(vector<string> &patterns, string word)
{
    int count = 0;
    for (int i = 0; i < patterns.length(); i++)
    {
        if(word.find(patterns[i]) != string::npos)
            count++;
            return count;
    }
}
// Unoptimized Solution
class Solution
{
public:
    bool subString(std::string pattern, std::string str)
    {
        for (int i = 0; i < str.length(); i++)
        {
            for (int len = 1; len <= str.length() - i; len++)
            {
                if (pattern == str.substr(i, len))
                    return true;
            }
        }
        return false;
    }
    int numOfStrings(vector<string> &patterns, string word)
    {
        int count = 0;
        for (int i = 0; i < patterns.size(); i++)
        {
            if (subString(pattern[i], word))
            {
                count++;
            }
        }
        return count;
    }
};