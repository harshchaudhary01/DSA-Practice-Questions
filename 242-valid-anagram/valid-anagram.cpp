class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int>arr(26,0);
        for(char k: s) arr[k - 'a']++;
        for(char k: t) arr[k - 'a']--;
        for(auto k: arr){
            if(k != 0) return false;
        }
        return true;
    }
};