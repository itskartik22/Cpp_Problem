#include <iostream>
#include <cmath>
using namespace std;

void maxim(int a, int b, int c)
{
    int maxi = max(a, max(b, c));
    cout<<"MAximum : "<<maxi<<endl;
}

void minim(int a, int b, int c)
{
    int mini = min(a, min(b, c));
    cout<<"Minimum : "<<mini<<endl;
}

int main(){
    int a,b,c;
    cout<<"Enter three number to get max : ";
    cin>>a>>b>>c;
    maxim(a,b,c);
    minim(a,b,c);
    return 0;

}