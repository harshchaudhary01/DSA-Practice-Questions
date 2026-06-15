class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int>st;
        for(auto k: nums){
            if(st.contains(k)){
                return true;
            }
            st.insert(k);
        }
        return false;
    }
};