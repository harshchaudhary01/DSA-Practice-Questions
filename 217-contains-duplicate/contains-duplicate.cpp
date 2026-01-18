class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> st;
        for(int k: nums){
            if(st.count(k)) return true;
            st.insert(k);
        }
        return false;
    }
};