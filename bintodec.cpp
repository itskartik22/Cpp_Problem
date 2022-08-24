#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int bin;
    int dec=0;
    cout<<"Enter Binary Number : ";
    cin>>bin;
    for(int i=0;bin>0;i++){
        dec = dec + round(pow(2,i))*(bin%10);
        bin = bin/10;
    }
    cout<<"Decimal Number : "<<dec;
}