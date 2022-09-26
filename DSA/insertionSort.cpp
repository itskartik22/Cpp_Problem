//In this divide array in two part i.e sorted one and unsorted one
#include<iostream>
using namespace std;
void insertionSort(int *arr,int size){
    for(int i =1;i<size;i++){
        int current = arr[i];
        int j = i-1;
        while(j>=0 && current<arr[j]){
            arr[j+1]=arr[j];
            j--;
        }
        //placement
        arr[j+1]=current;
    }
}
int main(){
    int arr[]={2,3,9,2,5,4,6,1,7,3,6};
    int size = sizeof(arr)/sizeof(arr[0]);
    insertionSort(arr,size);
    for(auto val:arr)
        cout<<val<<" ";
    return 0;/*  */
}