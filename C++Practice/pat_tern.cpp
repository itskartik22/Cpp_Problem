#include <iostream>
using namespace std;
int main()
{
    int num = 1;
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= (2 * i - 1); j++)
        {
            if (j <= ((2 * i - 1) / 2))
            {
                cout << num << " ";
                // num = num - 2;
                num--;
            }
            else
            {
                cout << num << " ";
                num++;
            }
        }
        cout << endl;
    }
}