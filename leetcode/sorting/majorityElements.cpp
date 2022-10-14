#include <bits/stdc++.h>
using namespace std;
//Bit MAnipulation
int majorityElement(vector<int>& nums) {
        int majority = 0;
        for (unsigned int i = 0, mask = 1; i < 32; i++, mask <<= 1) {
            int bits = 0;
            for (int num : nums) {
                if (num & mask) {
                    bits++;
                }
            }
            if (bits > nums.size() / 2) {
                majority |= mask;
            }
        }
        return majority;
    }
    //PArtial Sorting
int majorityElement(vector<int> &nums)
{
    nth_element(nums.begin(),nums.begin()+nums.size()/2,nums.end());
    return nums[nums.size()/2];
}
//Randomization
 int majorityElement(vector<int>& nums) {
        int n = nums.size(), candidate, counter;
        srand(unsigned(time(NULL)));
        while (true) {
            candidate = nums[rand() % n], counter = 0;
            for (int num : nums) {
                if (num == candidate) {
                    counter++;
                }
            }
            if (counter > n / 2) {
                break;
            }
        }
        return candidate;
    }
int main()
{
    vector<int> nums = {2,2,3,2,3};
    cout << majorityElement(nums);
    return 0;
}