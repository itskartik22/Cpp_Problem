#include <stdio.h>
void main()
{
    int n;
    printf("enter the value of n");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2 * n - 1; j++)
        {
            if (j < n - i - 1 || j > n + i - 1)
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }
    for (int i = n - 1 - 1; i >= 0; i--)
    {
        for (int j = 0; j < 2 * n - 1; j++)
        {
            if (j < (n - 1) - i || j > (n - 1) + i)
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }

    // return 0;
}
// void main(){
//     int n;
//     printf("enter the value of n");
//     scanf("%d", &n);
//     for(int i=0; i<n; i++){
//         for(int j=0;j<2*n-1;j++){
//             if(j<n-i-1 || j>n+i-1){
//                 printf("  ");
//             }
//             else{
//                 printf("* ");
//             }
//         }
//         printf("\n");
//     }
// // return 0;
// }