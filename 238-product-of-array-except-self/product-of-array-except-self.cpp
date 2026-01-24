class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>leftProduct(nums.size(), 1);
        vector<int>rightProduct(nums.size(), 1);
        vector<int>result(nums.size());
        int temp = 1;
        for(int i = 1; i < nums.size(); i++){
            temp *= nums[i-1];
            leftProduct[i] = temp;
        }
        temp = 1;
        for(int i = nums.size()-2; i >= 0; i--){
            temp *= nums[i+1];
            rightProduct[i] = temp;
        }
        for(int i = 0; i < nums.size(); i++){
            result[i] = leftProduct[i]*rightProduct[i];
        }
        return result;
    }
};