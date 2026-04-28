class Solution {
  public:
    vector<string> result;
    
    bool isSafe(int i, int j, int n){
        return (i >= 0 && i < n && j >= 0 && j < n);
    }
    
    void solve(int i, int j, vector<vector<int>>& m, int n, string path){
        if(!isSafe(i,j,n) || m[i][j] == 0) return;
        
        if(i == n-1 && j == n-1){
            result.push_back(path);
            return;
        }
        
        m[i][j] = 0; // mark visited
        
        // D
        path.push_back('D');
        solve(i+1,j,m,n,path);
        path.pop_back();
        
        // R
        path.push_back('R');
        solve(i,j+1,m,n,path);
        path.pop_back();
        
        // U
        path.push_back('U');
        solve(i-1,j,m,n,path);
        path.pop_back();
        
        // L
        path.push_back('L');
        solve(i,j-1,m,n,path);
        path.pop_back();
        
        m[i][j] = 1; // backtrack
    }
    
    vector<string> ratInMaze(vector<vector<int>>& maze) {
        int n = maze.size();
        if(maze[0][0] == 0) return {};
        
        solve(0,0,maze,n,"");
        
        sort(result.begin(), result.end()); // optional (often required)
        return result;
    }
};