//Find Numbers with Even Number of Digits
#include<iostream>
using namespace std;

int numEvenDigit(int arr[],int size){
int ans=0;
    for(int i=0;i<size;i++){
        int digit=0;
        while(arr[i]!=0){
            arr[i] =  arr[i]/10;
            digit++;
        }
        if(digit%2==0){
            ans++;
        }

    }
    return ans;
}

int main(){
    int arr[]={121,345,2,521,789,361};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout<<numEvenDigit(arr,size);
    return 0;
}