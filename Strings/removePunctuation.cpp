#include<iostream>
int main(){
    std::string str="%welcome' to @geeksforgeek<s";
    for(int i=0;i<str.length();i++){
        if(str[i]<'A' || (str[i]>'Z' && str[i]<'a') || str[i]>'z'){
            str.erase(i,1);
            i--;
        }
    }
    std::cout<<str<<std::endl;
    return 0;
}