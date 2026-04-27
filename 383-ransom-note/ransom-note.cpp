class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int>arr(26,0);
        vector<int>brr(26,0);
        for(int i = 0; i < ransomNote.length(); i++){
            char c = ransomNote[i];
            arr[c - 'a']++;
        }
        for(int i = 0; i < magazine.length(); i++){
            char c = magazine[i];
            brr[c - 'a']++;
        }

        for(int i = 0; i < brr.size(); i++){
            if(brr[i] < arr[i]) return false;
        }
        return true;
    }
};