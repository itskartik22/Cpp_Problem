class Solution
{
public:
    int maximumWealth(vector<vector<int>> &accounts)
    {   
        int n = accounts.size();
        int m = accounts[0].size();
        int sum = 0, maxwealth = 0;
        for(int i = 0; i < n;i++){
            sum = 0;
            for(int j=0;j<m;j++){
                sum=sum+accounts[i][j];
            }
            if(sum>maxwealth){
                maxwealth=sum;
            }
        }
        return maxwealth;
    }
};