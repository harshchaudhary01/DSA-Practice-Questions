// User function Template for C++

class Solution {
  public:
    int findMatching(string text, string pat) {
        // Code here
        for(int i = 0; i < text.size(); i++){
            if(text[i] == pat[0]){
                int k = i;
                int count = 0;
                for(int j = 0; j < pat.size(); j++){
                    if(text[k] == pat[j]){
                        count++;
                        k++;
                        if(count == pat.size()) return i;
                    }
                }
            }
        }
        return -1;
    }
};