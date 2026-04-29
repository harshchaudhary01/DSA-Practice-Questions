class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mpp;
        for(int i = 0; i < nums.size(); i++) mpp[nums[i]] = i;
        for(int i = 0; i < nums.size(); i++){
            int search = target - nums[i];

            if(mpp.find(search) != mpp.end()){
                if(mpp[search] != i) return {i, mpp[search]};
            }
        }
        return {};
    }
};