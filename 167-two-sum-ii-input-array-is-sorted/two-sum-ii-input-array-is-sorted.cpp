class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        for(int i = 0; i < numbers.size(); i++){
            int lo = i+1;
            int hi = numbers.size()-1;
            int find = target - numbers[i];
            while(lo <= hi){
                int mid = (lo+hi)/2;
                if(numbers[mid] == find) return {i+1,mid+1};
                if(numbers[mid] > find) hi = mid-1;
                if(numbers[mid] < find) lo = mid+1;
            }
        }
        return {};
    }
};