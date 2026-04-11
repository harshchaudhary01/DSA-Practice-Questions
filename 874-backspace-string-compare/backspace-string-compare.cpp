class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<int>s1, t1;
        for(auto k: s){
            if(k == '#'){
                if(!s1.empty()) s1.pop();
            }else{
                s1.push(k);
            }
        }
        for(auto k: t){
            if(k == '#'){
                if(!t1.empty()) t1.pop();
            }else{
                t1.push(k);
            }
        }
        return s1 == t1;
    }
};