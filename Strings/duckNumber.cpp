#include<iostream>
#include<string>
bool duckNum(std::string num){
    if(num.length()==0){
        return false;
    }
    int i=0;
    while(num[i]=='0'){
        i++;
    }
    while(i<num.length()){
        if(num[i]=='0'){
            return true;
        }
        i++; 
    }
    return false;
}
int main(){
    std::string str;
    std::cin>>str;
    if(duckNum(str)){
        std::cout<<"This is a Duck Number "<<std::endl;
    }
    else{
        std::cout<<"This is not a Duck Number "<<std::endl;
    }
}