class Solution {
public:
    bool isValid(string s) {
        if(s.size() == 1) return false;
        stack<char> st;
        // bool flag = false;
        for(char ch: s){
            if(st.empty()){
                st.push(ch);
            }else{
                char temp = st.top();
                if(ch == ')'){
                    if(temp == '('){
                        // flag = true;
                        st.pop();
                    }else{
                        return false;
                    }
                }else if(ch == '}'){
                    if(temp == '{'){
                        // flag = true;
                        st.pop();
                    }else{
                        return false;
                    }
                }else if(ch == ']'){
                    if(temp == '['){
                        // flag = true;
                        st.pop();
                    }else{
                        return false;
                    }
                }
                else{
                    st.push(ch);
                }
            }
        }
        if(st.empty()) return true;
        else return false;
    }
};