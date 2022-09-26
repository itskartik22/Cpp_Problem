#include <iostream>
#include <cmath>
using namespace std;
int factorial(int n)
{
    int f = 1, i;
    for (i = 1; i <= n; i++)
    {
        f = f * i;
    }
    return f;
}
int main()
{
    //series = x + x^3/3! + x^5/5! + x^7/7! + x^9/9!;
    int x, i;
    float sum=0;
    printf("Enter a number : \n");
    scanf("%d", &x);
    for (i = 1; i <= 9; i++)
    {
        if (i % 2 != 0)
        {
            int power = round(pow(x,i));
            float fact = factorial(i);
            sum = sum + power / fact;
        }
    }
    printf("Sum of series is %f", sum);
    return 0;
}