
class Solution:
    def maxIceCream(self, costs: list[int], coins: int) -> int:
        costs.sort()
        count = 0

        for cost in costs:
            if cost > coins:
                return count
            else:
                count += 1
                coins -= cost

        return count
