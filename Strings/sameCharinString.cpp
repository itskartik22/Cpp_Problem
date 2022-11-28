#include<iostream>
#include<string>
//Using stl find_first_not_of() function
bool isSame(std::string &str){
    return (str.find_first_not_of(str[0])==std::string::npos);
}
int main(){
    std::string str;
    std::cin>>str;
    if(!isSame(str)){
        std::cout<<"No"<<std::endl;
    }
    else{
        std::cout<<"Yes"<<std::endl;
    }
    return 0;
}

//Without using stl
/**int main(){
    std::string str;
    std::cin>>str;
    bool ans=true;;
    for(int i=1;i<str.length();i++){
        if(str[i]!=str[0]){
            ans=false;
        }
    }
    if(!ans){
        std::cout<<"No"<<std::endl;
    }
    else{
        std::cout<<"Yes"<<std::endl;
    }
    return 0;
}**/