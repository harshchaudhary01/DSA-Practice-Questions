class Solution {
public:
    string reverseWords(string s) {
        vector<string> str;
        string res = "";
        string temp = "";
        int x = 0;
        for(int i = 0; i < s.length(); i++){
            if(s[i] != ' ') temp += s[i];
            else{
                if(temp.length() > 0){
                    str.push_back(temp);
                    temp = "";
                }
            }
        }
        if(temp.length() > 0) str.push_back(temp);
        reverse(str.begin(), str.end());
        for(int i = 0; i < str.size(); i++){
            res += str[i];
            if(i != str.size()-1) res += " ";
        }
        return res;
    }
};