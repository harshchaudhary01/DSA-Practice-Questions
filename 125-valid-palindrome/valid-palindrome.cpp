class Solution {
public:
    bool isPalindrome(string s) {
        string t = "";
        for(int i = 0; i < s.length(); i++){
            if(s[i] >= 'A' && s[i] <= 'Z') s[i] = s[i] + 32;
            if(s[i] >= '0' && s[i] <= '9') t += s[i];
            if(s[i] >= 'a' && s[i] <= 'z') t += s[i];
        }
        int i = 0, j = t.length()-1;
        while(i <= j){
            if(t[i] != t[j]) return false;
            i++;
            j--;
        }
        return true;
    }
};