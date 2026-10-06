class Solution:
    def distributeCandies(self, candyType: list[int]) -> int:
        unique = len(set(candyType))
        eat = len(candyType) // 2
        ans = min(unique, eat)
        return ans
         
