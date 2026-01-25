class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>result;
        unordered_map<string, vector<string>>mpp;
        for(auto &it: strs){
            vector<int>count(26,0);
            for(auto &k: it){
                count[k-'a']++;
            }
            string temp;
            for(int i = 0; i < 26; i++){
                temp += '#'+count[i];
            }
            mpp[temp].push_back(it);
        }
        for(auto &it: mpp){
            result.push_back(it.second);
        }
        return result;
    }
};