class Solution {
public:
    string removeOuterParentheses(string s) {
        int n = s.length()-1;
        int i = 0;
        vector<string>result;
        string temp = "";
        string ans = "";
        int count = -1;
        while(i <= n){
            if(s[i] == '('){
                if(count == -1) count += 2;
                else count++;
                temp+='(';
            }
            else{
                count--;
                temp += ')';
                if(count == 0){
                    result.push_back(temp);
                    temp = "";
                    count = -1;
                }
            }
            i++;
        }

        for(string &t: result){
            if(t.size() > 2){
                t.erase(0,1);
                t.erase(t.size()-1,1);
                ans += t;
            }
        }
        return ans;
    }
};