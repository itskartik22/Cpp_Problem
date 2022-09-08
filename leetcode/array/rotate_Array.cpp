// Rotate array by k step...

class Solution
{
public:
    void rotate(vector<int> &nums, int k)
    {   
        int size = nums.size();
        int rotation = 1;
        while (rotation <= k)
        {
            int temp = nums[size-1];
            for(int i=size-1;i>0;i--){
                nums[i]=nums[i-1];

            }
            nums[0]=temp;
            rotation++;
        }
    }
};