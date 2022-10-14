#include<iostream>
using namespace std;
int firstindex(int arr[],int n,int i,int target){
    if(i>=n){
        return -1;
    }
    if(target==arr[i]){
        return i;
    }
    return firstindex(arr,n,i+1,target); 
}
int lastindex(int arr[],int n,int i,int target){
    if(i>=n){
        return -1;
    }
    int restArray = lastindex(arr,n,i+1,target);
    if(restArray!=-1){
        return restArray;
    }
    if(arr[i]==target){
        return i;
    }
    return -1;
}
int main(){
    int arr[]={2,5,3,0,3,5,2,9};
    int size=sizeof(arr)/sizeof(arr[0]);
    int target=3;
    cout<<firstindex(arr,size-1,1,target)<<endl;
    cout<<lastindex(arr,size-1,1,target)<<endl;
    return 0;
}