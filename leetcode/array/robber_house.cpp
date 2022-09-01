#include <bits\stdc++.h>
using namespce std;
int rob(vector<int> &nums)
{
    int amount = 0;
    int a0 = 0;
    int a1 = 0;
    for (int i = 0; i < nums.size(); i = i + 2)
    {
        a0 += nums[i];
    }
    for (int i = 1; i < nums.size(); i = i + 2)
    {
        a1 += nums[i];
    }
    amount = max(a0, a1);
    return amount;
}

int main(){
    
}
