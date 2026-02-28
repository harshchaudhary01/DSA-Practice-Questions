class Solution {
public:

    void rotation(vector<int>&nums, int lo, int hi){
        while(lo < hi){
            int temp = nums[lo];
            nums[lo] = nums[hi];
            nums[hi] = temp; 
            lo++;
            hi--;
        }
    }

    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k%n;
        rotation(nums,0,n-1);
        rotation(nums,0,k-1);
        rotation(nums,k,n-1);
    }
};