class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int productOfAll = 1;
        int productWithoutZero = 1;
        int countZero = 0;
        for(int i = 0; i < nums.size(); i++){
            productOfAll *= nums[i];
            if(nums[i] == 0){
                countZero++;
            }
            else{
                productWithoutZero *= nums[i];
            }
        }

        vector<int> result(nums.size());
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] != 0){
                result[i] = productOfAll/nums[i];
            }
            else{
                if(countZero == 1){
                    result[i] =  productWithoutZero;
                }
                else if(countZero > 1){
                    result[i] = 0;
                }
            }
        }
        return result;
    }
};