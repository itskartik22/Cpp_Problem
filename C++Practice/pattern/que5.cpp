#include <iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        int j = 1;
        if (i <= num / 2 + 1)
        {
            while (j <= i)
            {
                cout << "* ";
                j++;
            }
        }
        else
        {
            while (j<=(num-i+1))
            {
                cout << "* ";
                j++;
            }
        }
        cout << endl;
    }
}