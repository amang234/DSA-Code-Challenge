class Solution {
public:
    int vishu(int n, vector<int> &dp) {
        if(n<=1) return n;
        if(dp[n] != -1) return dp[n];
        return dp[n] = vishu(n-1,dp) + vishu(n-2,dp); 
    }
    int fib(int n) {
        vector<int>dp(n+1,-1);
        return vishu(n,dp);
    }
};