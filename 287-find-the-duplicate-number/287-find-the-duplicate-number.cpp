class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        map<int,int> map;
        
        for(auto i:nums)
        {
            map[i]++;
            if(map[i]>1)
            {
                return i;
            }
        }
        return 0;
    }
};