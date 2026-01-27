class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;
        set<int>st(nums.begin(), nums.end());
        int max_count = 1;
        int count = 1;
        vector<int>arr(st.begin(), st.end());
        for(int i = 0; i < arr.size()-1; i++){
            if(arr[i+1] == arr[i]+1){
                count++;
            }
            else{
                max_count = max(max_count, count);
                count = 1;
            }
        }
        return max(max_count,count);
    }
};