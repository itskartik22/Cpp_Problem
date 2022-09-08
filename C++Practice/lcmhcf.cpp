#include <iostream>
#include <cmath>
using namespace std;

int hcf(int n1, int n2){
    int mini = min(n1 , n2);
    for(int i=mini;i>=1;i--){
        if(n1%i==0 && n2%i==0){
            return i;
        }
    }
    return -1;
}

int lcm(int n1, int n2){
    int maxi = max(n1 , n2);
    for(int i = maxi; i<=n1*n2;i++){
        if(i%n1==0 && i%n2==0){
            return i;
        }
    }
    return -1;
}

int main(){
    int n1,n2;
    cout<<"Enter two number to LCM and HCF : ";
    cin>>n1>>n2;
    cout<<"HCF of "<<n1<<" and "<<n2<<" is "<<hcf(n1,n2)<<endl;
    cout<<"LCM of "<<n1<<" and "<<n2<<" is "<<lcm(n1,n2)<<endl;
    return 0;
}