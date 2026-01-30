class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        set<vector<int>>stt;
        for(int i = 0; i < nums.size(); i++){
            int target = -nums[i];
            int lo = i+1;
            int hi = nums.size()-1;
            while(lo < hi){
                int temp = nums[lo] + nums[hi];
                if(temp == target){
                    stt.insert({nums[i], nums[lo], nums[hi]});
                    lo++;
                    hi--;
                }
                else if(temp > target) hi--;
                else lo++;
            }
        }
        return vector<vector<int>>(stt.begin(), stt.end());
    }
};