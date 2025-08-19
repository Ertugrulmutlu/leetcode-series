class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        min_index = 0
        result = 0
        for i in range(1,len(prices)):
            profit = prices[i] - prices[min_index]
            result = max(result, profit)
            if prices[i] < prices[min_index]:
                min_index = i

        return result
