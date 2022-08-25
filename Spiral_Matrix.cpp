
#include <iostream>
#include <vector>
using namespace std;

vector<int> spiralOrder(vector<vector<int>> &matrix)
{
    int m = matrix.size();
    int n = matrix[0].size();
    int row_start = 0;
    int row_end = m - 1;
    int col_start = 0;
    int col_end = n - 1;
    vector<int> spiralmatrix;
    while (row_start <= row_end && col_start <= col_end)
    {

        // row_start
        for (int col = col_start; col <= col_end; col++)
        {
            spiralmatrix.push_back(matrix[row_start][col]);
        }
        row_start++;
        // col_end
        for (int row = row_start; row <= row_end; row++)
        {
            spiralmatrix.push_back(matrix[row][col_end]);
        }
        col_end--;

        // check if condition mentioned in while loop exceeds or not..
        // Due to above increment or decrement....
        if (row_start <= row_end)
        {
            // row_end
            for (int col = col_end; col >= col_start; col--)
            {
                spiralmatrix.push_back(matrix[row_end][col]);
            }
            row_end--;
        }
        if (col_start <= col_end)
        {
            // col_start
            for (int row = row_end; row >= row_start; row--)
            {
                spiralmatrix.push_back(matrix[row][col_start]);
            }
            col_start++;
        }
    }
    return spiralmatrix;
}

int main()
{
    vector<vector<int>> matrix = {
        {1, 5, 7, 9, 10, 11},
        {6, 10, 12, 13, 20, 21},
        {9, 25, 29, 30, 32, 41},
        {15, 55, 59, 63, 68, 70},
        {40, 70, 79, 81, 95, 105}};
    vector<int> arr = spiralOrder(matrix);
    for (const int &elements : arr)
    {
        cout << elements << " ";
    }
    return 0;
}