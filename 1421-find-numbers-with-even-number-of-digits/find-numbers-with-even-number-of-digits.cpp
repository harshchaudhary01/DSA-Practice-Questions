class Solution {
public:

    bool digitCounter(int n){
        int count = 0;
        while(n != 0){
            n = n/10;
            count++;
        }
        return (count%2 == 0);
    }

    int findNumbers(vector<int>& nums) {
        int res = 0;
        for(auto k: nums){
            if(digitCounter(k)) res++;
        }
        return res;
    }
};