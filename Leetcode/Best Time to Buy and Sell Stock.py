class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        profit, min = 0, prices[0]
        for price in prices:
            if price < min:
                min = price
            if price - min > profit:
                profit = price - min
        return profit