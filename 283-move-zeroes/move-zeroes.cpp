class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        if(nums.size() == 1) return;
        int zeros = 0;
        int lo = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] != 0){
                nums[lo] = nums[i];
                lo++;
            }
            else zeros++;
        }
        for(int i = nums.size()-zeros; i < nums.size(); i++){
            nums[i] = 0;
        }
    }
};