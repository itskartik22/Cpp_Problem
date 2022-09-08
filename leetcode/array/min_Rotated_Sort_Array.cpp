class Solution {
public:
int returnPivot(vector<int> &arr, int start, int end)
{
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        // four cases are here
        if (mid<end && arr[mid] > arr[mid + 1])  //to remove index bound error mid < end
        {
            return mid;
        }
        else if (mid>start && arr[mid] < arr[mid - 1]) //to remove index bound error mid > start
        {
            return mid - 1;
        }
        else if (arr[start] >= arr[mid])
        {
            end = mid - 1;
        }
        else if (arr[start] < arr[mid])
        {
            start = mid + 1;
        }
    }
    // returning -1 if dont get pivot element
    return -1;
}
    int findMin(vector<int>& nums) {
        int x = returnPivot(nums,0,nums.size()-1)
        if(x != -1){
            return nums[x+1];
        }
        else{
            return nums[0];
        }
        
    }
};