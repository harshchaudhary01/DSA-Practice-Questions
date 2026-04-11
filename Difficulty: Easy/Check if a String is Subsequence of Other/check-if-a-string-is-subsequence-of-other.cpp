class Solution {
  public:
    bool isSubSeq(string& s, string& t) {
        // code here
        if(s.length()==0) return true;
        int j = 0;
        for(int i = 0; i < t.length(); i++){
            if(t[i] == s[j]){
                j++;
                if(j == s.length()) return true;
            }
        }
        return false;
    }
};