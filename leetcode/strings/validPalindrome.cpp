class Solution
{
public:
    bool isPalindrome(string s)
    {
        int len = s.length();
        string str;
        for (int i = 0; i < len; i++)
        {
            s[i] = tolower(s[i]);
            if (isalnum(s[i]))
                str += s[i];
        }
        int s = 0;
        int e = s.length() - 1;
        while (s < e)
        {
            if (str[s] != str[e])
                return false;
            s++;
            e--;
        }
        return true;
    }
};