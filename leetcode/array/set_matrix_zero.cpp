class Solution {
public:
    vector<vector<int>> setZeroes(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        vector<vector<int>> setzero;
        setzero=matrix;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(setzero[i][j]==0){
                    int row=i;
                    int col=j;
                    // colfixed
                    for(int k=0;k<n;k++){
                        matrix[k][col]=0;
                    }
                    // rowfixed
                    for(int k=0;k<m;k++){
                        matrix[row][k]=0;
                    }
                }
            }
        }      
        return matrix;
    }
};