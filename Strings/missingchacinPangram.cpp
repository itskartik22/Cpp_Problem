#include <iostream>
#include <string>
#include<vector>
std::string returnString(std::vector<bool> &mark)
{
    std::string str;
    for (int i = 0; i < 26; i++)
    {
        if (mark[i] == false)
        {
            str.push_back('a' + i);
        }
    }
    return str;
}
std::string missingChar(std::string str)
{
    std::vector<bool> mark(26,false);
    int index;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            index = str[i] - 'A';
        }
        else if (str[i] >= 'a' && str[i] <= 'z')
        {
            index = str[i] - 'a';
        }
        else
        {
            continue;
        }
        mark[index] = true;
    }
    return returnString(mark);
}
int main()
{
    std::string str = "Hello";
    std::cout << missingChar(str) << std::endl;
    return 0;
}