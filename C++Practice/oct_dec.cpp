#include<iostream>
#include<cmath>
using namespace std;
// int reverse(int num){
//     int rev = 0;
//     while(num>0){
//         int r = num%10;
//         rev = rev *10 + r;
//         num = num/10;
//     }
//     return rev;
// }
int main()
{
    int n, num=0,i=0;
    scanf("%d", &n);
    while (n > 0)
    {
        int r = n % 10;
        num = num + r*pow(8,i++);
        n = n/10;
    }
    
    printf("%d",num);
    return 0;
}