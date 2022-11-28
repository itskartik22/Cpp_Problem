#include <iostream>
#include <string>

void subString(std::string str)
{
    for (int i = 0; i < str.length(); i++)
    {
        for (int len = 1; len <= str.length()-i; len++)
        {
            std::cout << str.substr(i, len) << std::endl;
        }
    }
    return;
}
int main()
{
    std::string str = "abcd";
    subString(str);
    return 0;
}