class Solution(object):
    def coinChange(self, coins, amount):
        """
        :type coins: List[int]
        :type amount: int
        :rtype: int
        """
        if amount == 0:
            return 0
        if not coins:
            return -1
        
        dp = [amount+1]*(amount+1)
        dp[0] = 0
        
        for i in range(1, amount+1):
            for j in range(len(coins)):
                if coins[j]<=i:
                    dp[i] = min(dp[i], dp[i-coins[j]]+1)
        
        return dp[amount] if dp[amount]<=amount else -1
        
        
        