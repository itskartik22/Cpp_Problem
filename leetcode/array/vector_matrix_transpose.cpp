class Solution
{
public:
    vector<vector<int>> transpose(vector<vector<int>> &matrix)
    {
        int n=matrix.size();
        int m=matrix[0].size();
        vector<vector<int>> transposematrix;
        for(int i=0;i<m;i++){
            vector<int> vec;
            for(int j=0;j<n;j++){
                vec.push_back(matrix[j][i]);
            }
            transposematrix.push_back(vec);
        }
        return transposematrix;
    }
};