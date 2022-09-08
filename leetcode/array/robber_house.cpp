#include <bits\stdc++.h>
#include <vector>
using namespace std;
int addingAmount(vector<int> &nums, int num1, int initial, int size)
{
    int sum = num1;
    // for (int i = initial; i < size; i = i + 2)
    // {
    //     sum = sum + nums[i];
    // }
    for(int i=initial;i<size;i++){
        sum = sum + nums[initial];
        int j=initial+2;
        while(j<size){
            int primary = sum + 
        }
    }
    return sum;
}
int rob(vector<int> &nums)
{
    int main_max = 0, local_max = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        main_max = max(main_max, local_max);
        int j = i + 2;
        while (j < nums.size())
        {
            local_max = max(local_max, addingAmount(nums, nums[i], j, nums.size()));
            j++;
        }
    }
    return main_max;
}

int main()
{
    vector<int> nums = {1,2};
    cout << rob(nums);
    return 0;
}
