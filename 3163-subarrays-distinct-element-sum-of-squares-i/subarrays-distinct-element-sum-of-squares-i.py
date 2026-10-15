class Solution:
    def sumCounts(self, nums: List[int]) -> int:
        distance = 0
        ans = 0
        total = 0
        for i in range(len(nums)):
            for j in range(i, len(nums)):
                ans = nums[i:j+1]
                distance = len(set(ans))
                sum = distance ** 2

                total += sum

        return total