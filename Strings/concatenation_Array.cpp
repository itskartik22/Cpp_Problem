#include <bits/stdc++.h>
using namespace std;
vector<int> getConcatenation(vector<int> &nums)
{
    vector<int> ans;
    for (int i = 0; i < nums.size(); i++)
    {
        ans.push_back(nums[i]);
    }
    for (int i = 0; i < nums.size(); i++)
    {
        ans.push_back(nums[i]);
    }
    return ans;
}
int main()
{
    vector<int> nums = {1, 3, 2, 1, 4, 5, 6, 7, 8, 9};
    nums = getConcatenation(nums);
    for (int &element : nums)
    {
        cout << element << " ";
    }
}