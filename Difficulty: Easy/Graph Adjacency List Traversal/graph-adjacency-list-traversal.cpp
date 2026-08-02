class Solution {
  public:
    vector<vector<int>> printGraph(int V, vector<pair<int, int>>& edges) {
        // code here
        vector<vector<int>> l(V);
        for(auto k: edges){
            int u = k.first;
            int v = k.second;
            l[u].push_back(v);
            l[v].push_back(u);
        }
        return l;
    }
};