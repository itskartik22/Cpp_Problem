class Solution
{
public:
    int mySqrt(int x)
    {
        int s = 1;
        int e = x;
        int potent_ans = -1;
        while (s <= e)
        {
            int mid = s + (e - s) / 2;
            if (mid * mid <= x)
            {
                potent_ans = mid;
                s = mid + 1;
            }
            else{
                e = m - 1;
            }
        }
        return potent_ans;
    }
};