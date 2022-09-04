class Solution {
public:
    int findMin(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cout.tie(NULL);
        cin.tie(NULL);
        
        int start = 0, end = nums.size() - 1;
        if (end == 0) return nums[0];
        if (nums[end] > nums[0]) return nums[0];
        while (start + 1 < end) {
            int mid = start + (end - start) / 2;
            if (nums[mid] > nums[0] ) {
                start = mid;
            } else {
                end = mid;
            }
        }
        if (nums[end - 1] > nums[end]) return nums[end];
        return -1;
    }

};