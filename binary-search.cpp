#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> &nums, int target)
{
    int start = 0;
    int end = nums.size() - 1;
    int mid = start + (end - start) / 2;

    while (start < end)
    {
        if (nums[mid] == target)
            return mid;
        else if (target > nums[mid])
            start = mid + 1;
        else
            end = mid - 1;
        mid = start + (end - start) / 2;
    }
    return -1;
}

int main()
{
    int target = 19;
    vector<int> array{2, 3, 4, 5, 7, 10, 14, 17, 19, 25, 30};
    cout << "Target : " << target << endl;
    cout << "Array : ";
    for (int i : array)
        cout << i << " ";
    int ans = binarySearch(array, target);
    cout << endl
         << "Index of target : " << ans;
}
