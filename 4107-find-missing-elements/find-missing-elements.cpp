class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int>result;
        priority_queue<int, vector<int>, greater<int>> pq;

        for(auto k: nums) pq.push(k);
        while(!pq.empty()){
            int first = pq.top();
            pq.pop();
            first++;
            if(!pq.empty()){
                while(first != pq.top()){
                    result.push_back(first++);
                }
            }
        }
        return result;
    }
};