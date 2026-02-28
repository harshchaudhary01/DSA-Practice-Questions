class Solution {
public:
    int missingNumber(vector<int>& nums) {
        vector<int>arr(10001,0);
        for(int i = 0; i < nums.size(); i++){
            arr[nums[i]]++;
        }
        for(int i = 0; i < arr.size(); i++){
            if(arr[i] == 0) return i;
        }
        return -1;
    }
};