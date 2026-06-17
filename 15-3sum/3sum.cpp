class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> result;
        sort(nums.begin(), nums.end());
        int i = 0, j = nums.size()-1;
        for(int i = 0; i < nums.size()-2; i++){
            int target = 0 - nums[i];
            int low = i+1, high = nums.size()-1;
            while(low < high){
                if(nums[low]+nums[high] == target){
                    result.insert({nums[i], nums[low], nums[high]});
                    low++;
                    high--;
                }
                else if(nums[low]+nums[high] > target) high--;
                else low++;
            }
        }
        return vector<vector<int>>(result.begin(), result.end());
    }
};