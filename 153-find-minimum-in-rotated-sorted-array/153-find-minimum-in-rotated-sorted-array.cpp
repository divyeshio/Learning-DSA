class Solution {
public:
    int findMin(vector<int>& nums, int low =0 , int high = INT_MAX) {
        if(high == INT_MAX)
            high = nums.size()-1;
        
        
        if (high < low)
            return nums[0];

        if (high == low)
            return nums[low];

        int mid = low + (high - low) / 2;

        if (mid < high && nums[mid + 1] < nums[mid])
            return nums[mid + 1];

        if (mid > low && nums[mid] < nums[mid - 1])
            return nums[mid];

        if (nums[high] > nums[mid])
            return findMin(nums, low, mid - 1);
        return findMin(nums, mid + 1, high);
    }

};