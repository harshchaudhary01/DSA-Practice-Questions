class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int sum = 0;
        int temp = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 1){
                temp++;
                if(sum < temp) sum = temp;
            }
            else{
                temp=0;
            }
        }
        return sum;
    }
};