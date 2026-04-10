class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        vector<int>res(n,-1);
        for(int i = 0; i < nums.size(); i++){
            for(int j = i+1; j <= 2*nums.size(); j++){
                if(nums[j%n] > nums[i]){
                    res[i] = nums[j%n];
                    break;
                }
            }
        }
        return res;
    }
};