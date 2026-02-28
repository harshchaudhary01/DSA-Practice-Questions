class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int lo = 0;
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] != nums[lo]){
                nums[lo+1] = nums[i];
                lo++;
            }
        }
        return lo+1;
    }
};