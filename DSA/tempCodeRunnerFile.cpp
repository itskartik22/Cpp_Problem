int minEatingSpeed(vector<int> &piles, int h)
{
    int high = INT_MIN;
    for (auto val : piles)
    {
        high = max(high, val);
    }
    int ans = 0;
    int low = 1;
    while (low < high)
    {
        int mid = low + (high - low) / 2;
        int val = 0;
        // time calculation if speed is k
        for (auto a : piles)
            val += (a + mid - 1) / mid;
        // checking with given hour
        if (val <= h)
        {
            high = mid;
        }
        else
        {
            low = mid + 1;
        }
    }
    return low;
}