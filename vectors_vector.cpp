#include <iostream>
#include <vector>
using namespace std;

#define ROW 4
#define COL 5
int main()
{
    // declaration of vectors of vector
    vector<vector<int>> vec;
    int num = 10;
    // Insertion of elements in vector

    for (int i = 0; i < ROW; i++)
    {
        vector<int> vec1;

        for (int j = 0; j < COL; j++)
        {
            vec1.push_back(num);
            num += 5;
        }
        vec.push_back(vec1);
    }
    vec.reverse(vec.begin(),vec.end());
    // Displaying 2D vector
    for (int i = 0; i < vec.size(); i++)
    {
        for (int j = 0; j < vec[i].size(); j++)
        {
            cout << vec[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}