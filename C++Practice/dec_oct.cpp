#include<iostream>
using namespace std;
int reverse(int num){
    int rev = 0;
    while(num>0){
        int r = num%10;
        rev = rev *10 + r;
        num = num/10;
    }
    return rev;
}
int main()
{
    int n, num=0;
    scanf("%d", &n);
    while (n > 0)
    {
        int r = n % 8;
        num = num * 10 + r;
        n = n/8;
    }
    
    printf("%d",reverse(num));
    return 0;
}