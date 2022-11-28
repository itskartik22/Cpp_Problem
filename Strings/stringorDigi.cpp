#include <iostream>
#include <string>
#include <vector>
bool isDigit(std::string &str){
for(int i=0;i<str.length();i++){
    if(!isdigit(str[i])){
        return false;
    }
}
return true;
}
int main()
{
    std::string str;
    std::cin >> str;
    if (!isDigit(str))
        std::cout << "String" << std::endl;
    else
        std::cout << "Digit" << std::endl;
    return 0;
}