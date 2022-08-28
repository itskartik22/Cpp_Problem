#include<iostream>
using namespace std;

int minNumber(int arr[],int min,int n){
    for(int i=1;i<n;i++){
        if(min>arr[i]){
            min=arr[i];
        }
    }
    return min;
}

int main(int argc, char const *argv[])
{
    int arr[10]={3,5,7,9,10,4,8,11,13,15};
    int min = arr[0];
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<minNumber(arr,min,size);
    return 0;
}
