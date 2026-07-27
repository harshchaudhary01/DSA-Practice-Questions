class Solution {
public:
    int maxProduct(vector<int>& nums) {
        priority_queue<int,vector<int>,greater<int>>pq;
        for(auto k: nums){
            pq.push(k);
            if(pq.size() > 2) pq.pop();
        }
        int f = pq.top();
        pq.pop();
        int s = pq.top();
        return (f-1)*(s-1);
    }
};