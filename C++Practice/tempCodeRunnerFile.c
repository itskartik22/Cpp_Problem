#include<stdio.h>
int main(){
int arr[5],p=1,sum=0;
for(int i=0;i<5;i++){
printf("enter the values");
scanf("%d", &arr[i]);

}
for(int i=0;i<5;i++){
    while(arr[i]/10>=10){
        p=p++;
        arr[i]/10;
    
    }
    }
if(p%2==0){
    sum=sum+1;
}
printf("%d",sum);
return 0;

}