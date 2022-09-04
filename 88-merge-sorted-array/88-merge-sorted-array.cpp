class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        ios_base::sync_with_stdio(false);
        cout.tie(NULL);
        cin.tie(NULL);
        
        int s = m+n-1;
        while(m > 0 && n>0){
            if(nums1[m-1 ] > nums2[n-1]){
               nums1[s] = nums1[m-1];
               m--;
            }else{
                nums1[s] = nums2[n-1];
                n--;
            }
            s--;
        }
        while (n> 0){
            nums1[s] = nums2[n-1];
            n--;
            s--;
        }
    }
};