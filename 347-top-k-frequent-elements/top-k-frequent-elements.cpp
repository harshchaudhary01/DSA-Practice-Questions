class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        typedef pair<int,int> P;
        unordered_map<int,int>mp;
        for(int i = 0; i < nums.size(); i++){
            mp[nums[i]]++;
        }
        
        vector<vector<int>>arr(nums.size()+1);
        for(auto &it: mp){
            arr[it.second].push_back(it.first);
        }
        int n = nums.size();
        vector<int>result;
        for(int i = n; i >= 0; i--){
            if(arr[i].size() == 0) continue;
            while(arr[i].size()>0 && k > 0){
                result.push_back(arr[i].back());
                arr[i].pop_back();
                k--;
            }
        }
        return result;

    }
};