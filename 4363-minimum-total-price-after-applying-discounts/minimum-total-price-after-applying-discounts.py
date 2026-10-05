class Solution:
    def minPrice(self, prices: list[int], discounts: list[int]) -> float:
        prices.sort(reverse=True)
        discounts.sort(reverse=True)

        saving = 0

        for i in range(min(len(prices), len(discounts))):
             saving += prices[i] * discounts[i] / 100

        original_total = sum(prices)

        ans = original_total - saving

        return ans