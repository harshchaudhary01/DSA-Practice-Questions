class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int lo = 0;
        int hi = numbers.size()-1;
        while(lo < hi){
            int temp = numbers[lo] + numbers[hi];
            if(temp == target) return {lo+1, hi+1};
            else if(temp > target) hi--;
            else lo++;
        }
        return {};
    }
};