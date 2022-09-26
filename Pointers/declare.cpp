#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int *p = &a;
    cout << "Address of a : " << &a<<endl;
    cout << "Value at p : " << *p<<endl;
    cout << "Address of p : " << &p<<endl;
    cout << "Address at p : " << p<<endl;

    //Arithemetic in pointer
    cout<<"Address  p+1 : "<<p+1<<endl;
    cout <<"Value at p+1 : "<<*(p+1)<<endl;
    return 0;
}