class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        int size=prices.size();
        if(size<=1)return 0;
        
        int dp[size][2];
        dp[0][0]=0;
        dp[0][1]=-prices[0]-fee;
        for(int i=1;i<size;i++){
            dp[i][0]=max(dp[i-1][0],dp[i-1][1]+prices[i]);
            dp[i][1]=max(dp[i-1][1],dp[i-1][0]-prices[i]-fee);
        }
        return dp[size-1][0];
    }
};
