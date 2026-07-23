class Solution {
public:
    vector<vector<int>> ans;
    void backTracking(vector<int> nums, int target, vector<int> curr, int idx){
        if(target == 0){
            ans.push_back(curr);
            return;
        }
        if(idx == nums.size()) return;

        // take
        if(nums[idx] <= target){
            curr.push_back(nums[idx]);
            backTracking(nums, target-nums[idx], curr, idx);
            curr.pop_back();
        }
        //skip
        backTracking(nums, target, curr, idx+1);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>curr;
        backTracking(candidates, target, curr, 0);
        return ans;
    }
};