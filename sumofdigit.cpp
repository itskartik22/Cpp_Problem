#include <iostream>
using namespace std;

int main()
{
    int n, sum;  //variables
    sum = 0;
    cin>>n;
    for (int i = 0; n>0; i++)
    {
        sum = sum + (n % 10);
        n=n/10;
    }
    cout<<"Final Ans is "<<sum<<endl;
    return 0;
}