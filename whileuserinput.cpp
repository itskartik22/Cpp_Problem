#include <iostream>
using namespace std;

int main()
{
    int num = 0;
    int sum=0;
    char ch;
    do{
        cout<<"enter number : "<<endl;
        cin>>num;
        cin.ignore();
        // cin >> num;
        sum =sum+num;
    }
    while (ch != 'x');

    cout<<"Sum is : "<<sum;
    return 0;
}