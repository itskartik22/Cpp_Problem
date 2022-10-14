#include<iostream>
using namespace std;
void decreasePrint(int n){
    if(n==0){
        return;
    }
     cout<<n<<" ";
    decreasePrint(n-1);
}
void increasePrint(int n){
    if(n==0){
        return;
    }
    increasePrint(n-1);
    cout<<n<<" ";
    return;
}
int main(){
    int n;
    cin>>n;
    decreasePrint(n);
    cout<<endl;
    increasePrint(n);
    return 0;
}