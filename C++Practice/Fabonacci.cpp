#include <iostream>
using namespace std;

// fabonacci functio....
int fabonac(int num, int a, int b, int temp){
        for(int i=0;i<num;i++){
        cout<<b<<" ";
        temp=b;
        b=a+b;
        a=temp;
    }
    return 0;
} 

int main()
{
    int num, a = 1, b = 0, temp;
    cout<<"Number of Fabonacci : ";
    cin>>num;
    fabonac(num , a , b , temp);
    return 0;
}