#include <iostream>
#include <cmath> // include header to get power 

using namespace std;
int main()
{
    int num1, num2; //declare range for armstrong number
    int sum = 0; 
    cout << "Enter numbers to print armstrong num b/w them : ";
    cin >> num1 >> num2;
    for (int i = num1; i <= num2; i++)
    {
        int divnum=i;
        while (divnum != 0)
        {
          int  temp = divnum % 10;
            divnum /= 10;
            sum += round(pow(temp,3));
        }
        if (sum == i)
        {
            cout << sum << " ";
        }
        sum = 0;
    }
    return 0;
}