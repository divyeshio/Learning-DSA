class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        
        unordered_map<int, int> seen;
        
        for (int i = 0; i < nums.size(); i++) {
            seen[nums[i]]++;
            if (seen[nums[i]] > 1) {
                return true;
            }
        }
        
        return false;
 
    }
};