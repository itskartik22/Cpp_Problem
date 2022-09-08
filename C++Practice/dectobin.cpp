#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int dec;
    int bin = 0;
    cout << "Enter Decimal Number(Base 10) : ";
    cin >> dec;

    for (int i = 0; dec > 0; i++)
    {
        bin = bin + round(pow(10,i))*(dec%2);
        dec = dec/2;
    }
    cout<<"Binary Number : "<<bin;
    return 0;
}