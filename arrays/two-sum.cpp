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

// 3. Optimized - Use two pointer approach

/* class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        int n = nums.size();
        vector<pair<int, int>> v;
        for (int i = 0; i < n; i++)
            v.push_back({nums[i], i});
        sort(v.begin(), v.end());
        int s = 0, e = n - 1;
        while (s < e)
        {
            int sum = v[s].first + v[e].first;
            if (sum == target)
                return {v[s].second, v[e].second};
            if (sum > target)
                e--;
            else
                s++;
        }
        return {-1, -1};
    }
};
 */