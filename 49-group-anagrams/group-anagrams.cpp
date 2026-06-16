class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mpp;
        for(auto k: strs){
            string temp = k;
            sort(temp.begin(), temp.end());
            mpp[temp].push_back(k);
        }
        vector<vector<string>> result;
        for(auto k: mpp){
            result.push_back(k.second);
        }
        return result;
    }
};