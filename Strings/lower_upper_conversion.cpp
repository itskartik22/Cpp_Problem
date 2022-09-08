#include<iostream>
#include<string>
using namespace std;
int main(){
    string str = "InDia";
    
    for(int i = 0;i<str.size();i++){
        int asci = str[i] ;
        if(65<=asci && asci<=90){
        char print = asci + 32;
        cout<<print;
        }
        else if(97<=asci<=122){
            char print = asci - 32;
            cout<<print;
        }
    }
    // cout<<;
    return 0;
}