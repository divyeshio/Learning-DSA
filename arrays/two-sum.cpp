// 1. BF - Linearly scan through each element with and search for the sum with other element is meeting the target or not.
// If found then return the pair, else return -1,-1

/* class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (nums[i] + nums[j] == target)
                    return {i, j};
            }
        }
        return {-1, -1};
    }
}; */

// 2. Better - Use map to save the answer
/* class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        int n = nums.size();
        unordered_map<int, int> m;
        for (int i = 0; i < n; i++)
        {
            int x = nums[i];
            int y = target - x;
            if (m.find(y) != m.end())
                return {i, m[y]};
            m[nums[i]] = i;
        }
        return {-1, -1};
    }
}; */