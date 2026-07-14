class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int first = -1, last = -1;
        int lo = 0, hi = nums.size()-1;
        while(lo <= hi){
            int mid = lo + (hi-lo)/2;
            if(nums[mid] == target){
                first = mid;
                hi= mid-1;
            }else if(nums[mid] > target) hi = mid - 1;
            else lo = mid+1;
        }
        if(first == -1) return {-1,-1};
        else{
            int temp = nums[first];
            for(int i = first; i < nums.size(); i++){
                if(nums[i] == temp) last = i;
                else break;
            }
        }
        return {first, last};
    }
};