//fabonacii series
#include <iostream>
using namespace std;
//main
int main()
{   
    
    int num;
    cin >> num; //number of term of series
    int a = 0, b = 1, temp;  //variables for initialisation
    for (int i = 0; i < num; i++)
    {
        cout << a << " ";
        temp = a;  //storing first number to get sum
        a = a + b;  //adding of first num to output
        b = temp;
    }
    return 0;
}