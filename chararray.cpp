#include<iostream>
using namespace std;

int main(){
    char arr[25]="apple is good for health";
    int i=0;
    while(arr[i] != '\0'){
        cout<<arr[i]<<endl;
        i++;
    }
    return 0;
}