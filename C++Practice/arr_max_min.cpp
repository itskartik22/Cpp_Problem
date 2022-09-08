#include<iostream>
#include<climits>
using namespace std;

int main(){
    int arr[5]={20,25,35,76,54};
    int minNo=INT_MAX;
    int maxNo=INT_MIN;
    for(int i=0;i<5;i++){
        if(minNo>arr[i]){
            minNo=arr[i];
        }
        if(maxNo<arr[i]){
            maxNo=arr[i];
        }
    }
        cout<<maxNo<<" "<<minNo;
        return 0;
}