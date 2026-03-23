class Solution {
public:
    int singleNumber(vector<int>& nums) {
        if(nums.size() == 1) return nums[0];
        unordered_map<int,int>mpp;
        for(int i = 0; i < nums.size(); i++){
            mpp[nums[i]]++;
        }
        for(auto k: mpp){
            if(k.second == 1) return k.first;
        }
        return 0;
    }
};