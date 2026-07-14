class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_sum = INT_MIN;
        int maxi = 0;

        for(auto k: nums){
            maxi += k;
            max_sum = max(max_sum, maxi);
            if(maxi < 0) maxi = 0;
        }
        return max_sum;
    }
};