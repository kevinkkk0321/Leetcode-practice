class Solution(object):
    def maxProfit(self, prices):
        """
        :type prices: List[int]
        :rtype: int
        """
        if len(prices) == 1:
            return 0
        
        maxprice = [0]*len(prices)
        cur_price = 0
        max_result = 0
        
        for i in range(1, len(prices)):
            maxprice[i] = max(maxprice[i-1] + prices[i] - prices[i-1], 0)
            max_result = max(max_result, maxprice[i])
        return max_result            
            