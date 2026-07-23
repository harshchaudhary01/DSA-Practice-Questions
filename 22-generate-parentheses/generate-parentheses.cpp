class Solution {
public:
    vector<string> ans;
    void backTracking(int n, string s, int open, int close){
        // base condition
        if(s.length() == 2*n){
            ans.push_back(s);
            return;
        }
        // pick
        if(open < n){
            backTracking(n,s+"(", open+1, close);
        }
        if(close < open){
            backTracking(n, s+")", open, close+1);
        }
    }
    vector<string> generateParenthesis(int n) {
        backTracking(n, "", 0, 0);
        return ans;
    }
};