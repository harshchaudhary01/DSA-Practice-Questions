class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int>arr;
        int f = 0, s = n;
        while((f != n) && (s != nums.size())){
            if(f < n) arr.push_back(nums[f++]);
            if(s < nums.size()) arr.push_back(nums[s++]);
        }
        return arr;
    }
};