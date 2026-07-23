class Solution {
public:
    vector<vector<int>>ans;
    void backTracking(vector<int>&nums, vector<int>&curr, vector<bool>&used){
        if(nums.size() == curr.size()){
            ans.push_back(curr);
            return;
        }
        for(int i = 0; i < nums.size(); i++){
            if(used[i]) continue;
            if(i > 0 && (nums[i] == nums[i-1]) && (!used[i-1])) continue;

            // pick
            used[i] = true;
            curr.push_back(nums[i]);

            // explore
            backTracking(nums, curr, used);

            // unpick
            curr.pop_back();
            used[i] = false;
        }
    }

    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int>curr;
        vector<bool>used(nums.size(), false);
        backTracking(nums, curr, used);
        return ans;
    }
};