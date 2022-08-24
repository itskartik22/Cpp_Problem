#include <iostream>
using namespace std;

int facto(int n)
{
    int fact = 1;

    if (n == 0 || n == 1)
    {
        return fact;
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            fact = fact * i;
        }
        return fact;
    }
    // return 0;
}

int main(){
    int row;
    cout<<"Number of Row :";
    cin>>row;
    int value;
    
    for(int i = 0; i < row; i++){
        for(int j=0;j<=i;j++){
            value= {facto(i)/(facto(i-j)*facto(j))};
            cout<<value<<" ";
        }
        cout<<endl;
    }
}