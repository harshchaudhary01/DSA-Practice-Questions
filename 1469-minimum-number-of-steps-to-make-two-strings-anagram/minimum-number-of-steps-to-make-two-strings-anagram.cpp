class Solution {
public:
    int minSteps(string s, string t) {
        vector<int>freq(26,0);

        for(auto k: s) freq[k-'a']++;
        for(auto k: t) freq[k-'a']--;
        int count = 0;
        for(int i = 0; i < 26; i++){
            if(freq[i] < 0){
                count += -freq[i];
            }
        }

        return count;
    }
};