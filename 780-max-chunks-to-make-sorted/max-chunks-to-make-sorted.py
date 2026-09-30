class Solution:
    def maxChunksToSorted(self, arr: list[int]) -> int:
        chunk = 0
        maximum = 0

        for i in range(len(arr)):
            maximum = max(maximum,arr[i])

            if maximum == i:
                chunk = chunk+1
        return chunk

