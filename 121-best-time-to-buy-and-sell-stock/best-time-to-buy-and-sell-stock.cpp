class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_price = INT_MAX;
        int max_profit = 0;

        for(int k: prices){
            min_price = min(min_price, k);
            max_profit = max(max_profit, k-min_price);
        }
        return max_profit;
    }
};