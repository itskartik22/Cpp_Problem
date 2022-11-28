#include <iostream>
#include <string>
void initialLetter(std::string &str){
    if(str.length()==0){
        return;
    }
    std::cout<<(char)toupper(str[0])<<" ";
    for(int i=1;i<str.length()-1;i++){
        if(str[i]==' '){
            std::cout<<(char)toupper(str[i+1])<<" ";
        }
    }
return;
}
int main()
{
    std::string str;
    getline(std::cin,str);
    initialLetter(str);
    return 0;
}