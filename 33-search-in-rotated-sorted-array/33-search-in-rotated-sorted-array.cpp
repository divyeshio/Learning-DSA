class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size()-1;
        int pivot = getPivot(nums, n);
        if(target >= nums[pivot] && target <= nums[n])
        {
            return binarySearch(nums, pivot,n,target);
        }
        else{
            return binarySearch(nums,0,pivot-1,target);
        }
    }
    
    int getPivot(vector<int>& arr, int n){
        int s = 0, e = n;
        
        int mid = s + (e-s)/2;
        while(s<e){
            if(arr[mid] >= arr[0]){
                s = mid + 1;
            }
            else{
                e = mid;
            }
            mid = s + (e-s)/2;
        }
        return s;
        
    }
    
    int binarySearch(vector<int>& arr, int s , int e, int target){
        
        int mid = s + (e-s)/2;
        while(s<=e){
            if(arr[mid] == target){
                return mid;
            }
            else if(arr[mid] < target){
                s = mid + 1;
            }
            else{
                e = mid - 1;
            }
            mid = s + (e-s)/2;
        }
        return -1;
    }
    
};