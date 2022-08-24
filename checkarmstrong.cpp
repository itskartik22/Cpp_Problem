#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    int num, sum = 0;  //Input and Comparable sum declaration
    cin >> num;
    int temp = num;
    while (temp != 0)  //while run upto temp != 0;
    {
        int rem = temp % 10;
        sum += round(pow(rem, 3));
        temp /= 10;
    }
    if (sum == num) //Compairing each other
    {
        cout << "Armstrong Number" << endl;
    }
    else
    {
        cout << "Not an Armstrong Number";
    }
    return 0;
}

