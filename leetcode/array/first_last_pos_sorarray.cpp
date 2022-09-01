class Solution
{
public:
    vector<int> searchRange(vector<int> &nums, int target)
    {
        vector<int> ans;
        int n = size(nums);
        int potentans1 = -1;
        int potentans2 = -1;
        int s1 = 0;
        int e1 = n - 1;
        // to get position of first target element ....
        while (s1 <= e1)
        {
            int m1 = s1 + (e1 - s1) / 2;
            if (nums[m1] == target)
            {
                potentans1 = m1;
                e1 = m1 - 1;
            }
            else if (nums[m1] > target)
            {
                e1 = m1 - 1;
            }
            else
            {
                s1 = m1 + 1;
            }
        }
        // to get position last target element .. ....
        int s2 = 0;
        int e2 = n - 1;
        while (s2 <= e2)
        {
            int m2 = s2 + (e2 - s2) / 2;
            if (nums[m2] == target)
            {
                potentans2 = m2;
                s2 = m2 + 1;
            }
            else if (nums[m2] < target)
            {
                s2 = m2 + 1;
            }
            else
            {
                e2 = m2 - 1;
            }
        }
            ans.push_back(potentans1);
            ans.push_back(potentans2);

        return ans;
    }
};