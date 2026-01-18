class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int, int>> arr;
        for(int i = 0; i < nums.size(); i++){
            arr.push_back({nums[i], i});
        }
        sort(arr.begin(), arr.end());

        for(int i = 0; i < arr.size(); i++){
            int find = target - arr[i].first;
            int lo = i+1, hi = arr.size()-1;
            while(lo <= hi){
                int mid = (lo+hi)/2;
                if(arr[mid].first == find) return {arr[i].second,arr[mid].second};
                if(arr[mid].first > find) hi= mid-1;
                if(arr[mid].first < find) lo = mid+1;
            }
        }
        return {};
    }
};