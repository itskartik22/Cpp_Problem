#include<iostream>
using namespace std;

int main()
{
    int row, col;
    cout << "Row : ";
    cin >> row;
    cout << "Column : ";
    cin >> col;
   if(row % 2 == 0){

        for (int i = 1; i <= row / 2; i++)
        {
            for (int j = 1; j <= col; j++)
            {
                if (j <= i || j >= col - i + 1)
                {
                    cout << "* ";
                }
                else
                {
                    cout << "  ";
                }
            }
            cout << endl;
        }
        for (int i = row / 2; i >= 1; i--)
        {
            for (int j = 1; j <= col; j++)
            {
                if (j <= i || j >= col - i + 1)
                {
                    cout << "* ";
                }
                else
                {
                    cout << "  ";
                }
            }
            cout << endl;
        }
    }
    if(row % 2 != 0){
        for (int i = 1; i <= row / 2 + 1; i++)
        {
            for (int j = 1; j <= col; j++)
            {
                if (j <= i || j >= col - i + 1)
                {
                    cout << "* ";
                }
                else
                {
                    cout << "  ";
                }
            }
            cout << endl;
        }
        for (int i = row / 2; i >= 1; i--)
        {
            for (int j = 1; j <= col; j++)
            {
                if (j <= i || j >= col - i + 1)
                {
                    cout << "* ";
                }
                else
                {
                    cout << "  ";
                }
            }
            cout << endl;
        }
    }
    return 0;
}