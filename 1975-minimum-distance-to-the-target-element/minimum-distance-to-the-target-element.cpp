class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        int n = nums.size();
        int smallest = INT_MAX;
        for(int i = start; i < 2*nums.size(); i++){
            if(nums[i%n] == target){
                smallest = min(abs((i%n)-start), smallest);
            }
        }
        return smallest;
    }
};