int maxFunction(vector<int> &piles)
{
    int maxi = INT_MIN;
    for (auto val : piles)
    {
        maxi = max(maxi, val);
    }
    return maxi;
}
int minEatingSpeed(vector<int> &piles, int h)
{
    int num = maxFunction(piles);
    int count = 0;
    for (int i = 1; i <= num; i++)
    {
        count = 0;
        for (int j = 0; j < piles.size(); j++)
        {
            int value = piles[j];
            while (value >= 0)
            {
                value -= i;
                count++;
            }
        }
        if (count == h)
        {
            return i;
        }
    }
}