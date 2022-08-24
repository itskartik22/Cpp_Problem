#include <iostream>
#include <string>
using namespace std;

void intfun()
{
    int x = 2;
    cout << "Data Type is integer" << endl;
    cout << "Size of int : " << sizeof(x) << endl;
}
void charfun()
{
    char x;
    cout << "Data Type is Character" << endl;
    cout << "Size of char : " << sizeof(x) << endl;
}
void doublefun()
{
    double x = 2;
    cout << "Data Type is double" << endl;
    cout << "Size of double : " << sizeof(x) << endl;
}
void floatfun()
{
    float x;
    cout << "Data Type is Float" << endl;
    cout << "Size of float : " << sizeof(x) << endl;
}
int main()
{
    string S;
    cin >> S;
    int l = S.length();
    if (l == 1)
    {
        if (isdigit(S[0]))
        {
            intfun();
        }
        else
        {
            charfun();
        }
    }
    else
    {
        bool flag = 0;
        for (int i = 0; i < l; i++)
        {
            if (S[i] == '.')
            {
                flag = 1;
                int j = l-i+1;
                if (j < 7)
                {
                    
                    floatfun();
                }
                else
                {
                    doublefun();
                }
            }
        }
        if (!flag)
        {
            intfun();
        }
    }
    // cout<<l;
    return 0;
}