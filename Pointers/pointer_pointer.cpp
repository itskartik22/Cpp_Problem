#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    int *p = &a;
    int **q = &p;
    int ***r = &q;
    cout << "value of variable : " << a << endl;
    // cout << "Address in p : " << p << endl;
    printf("Address in p : %p\n",p);
    cout << "Value in *p : " << *p << endl;
    cout << "Address stored in q : " << q<<endl;;
    cout << "Address stored in the the address of p i.e *q : " << *q << endl;
    cout<<"Value acces by *q : "<<**q<<endl;
    cout<<"Address in r is the address of q : "<<r<<endl;
    cout<<"Address store in the addres in r : "<<*r<<endl;
    cout<<"Value access by *r : "<<***r<<endl;
    **q = *p + 10;
    cout<<"Value of a : "<<a<<endl;
    return 0;
}