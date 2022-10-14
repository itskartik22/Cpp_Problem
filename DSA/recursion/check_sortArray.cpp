#include<iostream>
using namespace std;

bool checkSort(int arr[],int size){
    if(size==1){
        return true;
    }
    bool restSorted = checkSort(arr,size-1);
    return (arr[size-1]>arr[size-2]) && restSorted;
    //Another way
    // if(checkSort(arr,size-1)){
    // return (arr[size-1]>arr[size-2])?true:false;
    // }
    // else{
    //     return false;
    // }
    //one line
    // return (checkSort(arr,size-1))?((arr[size-1]>arr[size-2])?true:false):false;
}

int main()
{
    int arr[]={1,2,3,4,5};
    if(checkSort(arr,sizeof(arr)/sizeof(arr[0]))){
        cout<<"Sorted";
    }
    else{
        cout<<"Unsorted";
    }
    return 0;
}