class Solution {
  public:
    vector<int> bfs(vector<vector<int>> &adj) {
        // code here
        queue<int>q;
        vector<bool>visited(adj.size(), false);
        vector<int>result;
        
        q.push(0);
        visited[0] = true;
        
        while(q.size() > 0){
            int u = q.front();
            q.pop();
            
            result.push_back(u);
            
            for(auto v: adj[u]){
                if(!visited[v]){
                    q.push(v);
                    visited[v] = true;
                }
            }
        }
        return result;
    }
};