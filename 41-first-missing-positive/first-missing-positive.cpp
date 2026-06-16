class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_set<int>st;
        for(auto k: nums){
            st.insert(k);
        }
        for(int i = 1; i <= INT_MAX; i++){
            if(!st.contains(i)) return i;
        }
        return 0;
    }
};