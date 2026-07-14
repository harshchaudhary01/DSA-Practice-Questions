class Solution {
public:
    char findTheDifference(string s, string t) {
        vector<int>arr(26,0);
        if(t.length()) for(auto k: t) arr[k-'a']++;
        if(s.length()) for(auto k: s) arr[k-'a']--;
        for(int i = 0; i < 246; i++){ 
            if(arr[i] != 0){ 
                return (i + 'a');
            } 
        } 
        return 'x'; 
    }
};