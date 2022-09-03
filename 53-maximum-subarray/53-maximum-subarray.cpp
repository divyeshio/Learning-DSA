class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        ios_base::sync_with_stdio(false);
        cout.tie(NULL);
        cin.tie(NULL);

        
        int maxSum = INT_MIN;
        int sum = 0;
        for(int i=0; i< nums.size(); i++){
            sum += nums[i];
            maxSum = max(sum,maxSum);
            if(sum <0 ) sum = 0;
        }
        return maxSum;
    }
};