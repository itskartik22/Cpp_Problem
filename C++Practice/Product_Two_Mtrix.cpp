#include <iostream>
using namespace std;
int main()
{
    int matrix1[][3] = {{2, 5, 8}, {3, 6, 9}, {4, 7, 10}};
    int matrix2[][3] = {{1, 3, 5}, {2, 6, 4}, {3, 7, 3}};
    int arr[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            int row = 0;
            int col = 0;
            int sum = 0;
            while (row < 3 && col < 3)
            {
                sum = sum + matrix1[i][col] * matrix2[row][j];
                row++;
                col++;
            }
            arr[i][j] = sum;
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}