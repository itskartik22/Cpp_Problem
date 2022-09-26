class Solution
{
public:
    vector<int> findRightInterval(vector<vector<int>> &intervals)
    {
        vector<int> ans;
        int min_start = INT_MAX;
        int n = intervals.size();
        for (int i = 0; i < n; i++)
        {
            int j = 0;
            int index = -1;
            while (j < n)
            {
                if (intervals[i][1] <= intervals[j][0])
                {
                    if (min_start != min(min_start, intervals[j][0]))
                    {
                        min_start = intervals[j][0];
                        index = j;
                    }
                }
                j++;
            }
            ans.push_back(index);
        }
        return ans;
    }
};