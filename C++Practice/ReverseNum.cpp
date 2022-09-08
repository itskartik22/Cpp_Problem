#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int rev = 0;
    int temp;
    int num;
    cout<<"Enter the Number to Reverse : ";
    cin >> num;
    for (int i = 0; num > 0; i++)
    {
        temp = num % 10;
        rev = rev * 10 + temp;
        num = num / 10;
    }
    cout << "Reverse Number : " << rev;
    return 0;
}