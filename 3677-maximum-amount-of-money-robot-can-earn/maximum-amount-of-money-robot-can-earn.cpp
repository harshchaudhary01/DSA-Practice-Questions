class Solution {
public:
    int m; // m aur n bahar (globally) isliye banaya hai taaki, isko other functions me bhi use kar skte
    int n; 

    int t[501][501][3]; // memoization:  because the size is 500, and the neu power is 2.

    // we are using recursion, that's why every value we are passing...
    int solve(vector<vector<int>>& coins, int i, int j, int neu){
        // edge case and base condition simultaneously handle karenge...
        // ** Base condition **
        if(i == m-1 && j == n-1){ // base case
            if(coins[i][j] < 0 && neu > 0){
                return 0; // neutralize kar diye robber ko
            }
            return coins[i][j]; // agar neu power khatam ho gya to jo bhi hoga return karna hoga na...
        }

        if(i >= m || j >= n){
            return INT_MIN;
        }

        if(t[i][j][neu] != INT_MIN){
            return t[i][j][neu];
        }

        // ** Recusive condition **

        // Take the current cell value
        int take = coins[i][j] + max(solve(coins, i+1, j, neu), solve(coins, i, j+1, neu));

        // Skip the current value if you can...
        int skip = INT_MIN;
        if(coins[i][j] < 0 && neu > 0){
            int skipDown = solve(coins, i+1, j, neu-1);
            int skipRight = solve(coins, i, j+1, neu-1);
            skip = max(skipDown, skipRight);
        }
        return  t[i][j][neu] = max(take,skip);
    }

    int maximumAmount(vector<vector<int>>& coins) {
        m = coins.size(); // no. of rows pehle save kar lenge...
        n = coins[0].size(); // same, no. of cols bhi save kar lenge...

        for(int i = 0; i < 501; i++){
            for(int j = 0; j < 501; j++){
                for(int k = 0; k < 3; k++){
                    t[i][j][k] = INT_MIN;
                }
            }
        }

        return solve(coins, 0, 0, 2);
    }
};