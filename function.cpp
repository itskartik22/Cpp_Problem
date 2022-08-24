#include <iostream>
#include <cmath>
using namespace std;

void print()
{
    cout << "Hello World" << endl;
    // return 0;
}
void sum()
{
    int a, b;
    cin >> a >> b;
    cout << "Sum of num : " << a + b << endl;
}

void fact()
{
    int n, fact = 1;
    cin >> n;
    if (n == 0 || n == 1)
    {
        cout << fact << endl;
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            fact = fact * i;
        }
        cout << fact << endl;
    }
    // return 0;
}

void printprime()
{
    int a, b;
    bool flag = 0;
    cin >> a >> b;

    for (int i = a; i <= b; i++)
    {
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                flag = 1;
                break;
            }
            continue;
        }
        if (flag == 0)
        {
            cout << i << endl;
        }
        flag = 0;
    }
}

// int main()
// {
//     //Calling function print() and sum().....
//     print();
//     sum();
//     return 0;
// }

// int main()
// {
//     // Calling Factorial function....
//     fact();
//     return 0;
// }

Print prime factorial....
int main()
{
    printprime();
    return 0;
}