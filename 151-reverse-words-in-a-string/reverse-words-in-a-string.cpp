class Solution {
public:
    string reverseWords(string s) {
        vector<string> str;
        int j = 0;
        int n = s.length()-1;
        string ans = "";
        string temp = "";
        while(j <= n){
            if(s[j] != ' '){
                temp += s[j];
            }
            else if(s[j] == ' '){
                if(temp.length() > 0){
                    str.push_back(temp);
                    temp = "";
                }
            }
            j++;
        }
        if(temp.length() > 0){
            str.push_back(temp);
        }
        for(int i = str.size()-1; i >= 0; i--){
            ans += str[i];
            if(i != 0) ans += " ";
        }
        return ans;
    }
};