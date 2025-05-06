class Solution {
    public:
    long mod = 1e9 + 7;
    int numTilings(int n) {
        vector<int> dp(n+1, -1);
        return f(n, dp);
    }

    unsigned int f(int n, vector<int> &dp){
        if(n==0 || n==1){
            return 1;
        } else if (n==2){
            return 2;
        } else if(dp[n]!=-1){
            return dp[n];
        }
        unsigned int res = f(n-3, dp) + (2*f(n-1, dp));
        res %= mod;
        // unsigned int res = f(n-1, dp) + f(n-2, dp);

        // for(int i=n-3; i>= 0; i--){
        //     res += f(i, dp) * 2;
        //     res %= mod;
        // }

        dp[n] = res;
        return res;
    }
};