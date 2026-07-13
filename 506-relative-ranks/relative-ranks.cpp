class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        priority_queue<pair<int,int>>pq;
        vector<string>ans(score.size());

        int idx = 0;
        for(auto k: score){
            pq.push({k,idx++});
        }
        int rank = 0;
        while(!pq.empty()){
            rank++;
            if(rank == 1){
                ans[pq.top().second] = "Gold Medal";
            }
            else if(rank == 2){
                ans[pq.top().second] = "Silver Medal";
            }
            else if(rank == 3){
                ans[pq.top().second] = "Bronze Medal";
            }
            else{
                ans[pq.top().second] = to_string(rank);
            }
            pq.pop();
        }
        return ans;
    }
};