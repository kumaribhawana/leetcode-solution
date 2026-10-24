class Solution:
    def sumBase(self, n: int, k: int) -> int:
        total = 0
        while n > 0:
            digit = n % k
            total += digit
            n = n // k

        return total
