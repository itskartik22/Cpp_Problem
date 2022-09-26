#include <iostream>
#include <vector>
#include <limits>
using namespace std;
// bool canJump(vector<int> &nums);
bool canJump(vector<int> &nums)
{
    int index = 0, counter = 1;
    int maxi = nums[0];
    while (index + maxi < nums.size() - 1)
    {
        int num_loop = nums[index];
        if (num_loop <= 0)
        {
            return false;
        }
        else
        {
            maxi = nums[index + num_loop];
            int primary_index = index + num_loop;
            for (int j = num_loop; j >= 1; j--)
            {
                if (maxi < nums[index + j])
                {
                        maxi = nums[j + index];
                        primary_index = index + j;
                }
            }
            index = primary_index;
        }
        // counter++;
    }
    // cout << counter << endl;
    return true;
}
int main()
{
    // vector<int> nums = {3, 2, 1, 1, 1, 2, 1, 2, 2, 0, 0};
    vector<int> nums = {5,9,3,2,1,0,2,3,3,1,0,0};
    // vector<int> nums = {3, 2, 1, 0, 1, 1, 4, 4, 4, 0, 4, 0};
    // vector<int> nums = {4,2,0,0,1,1,4,4,4,0,4,0};
    if (canJump(nums) == true)
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
    return 0;
}
// bool canJump(vector<int> nums){
//     int index = 0;
//     int max_num = num[index];
//     while(index + max_num < nums.size()){
//         int loop_counter = nums[index];
//         if(loop_counter == 0){
//             return 0;
//         }
//         for(int i =1;i<=loop_counter;j++){

//         }
//     }
//     return false;
// }