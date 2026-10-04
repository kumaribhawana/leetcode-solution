class Solution:
    def sumGame(self, num: str) -> bool:
        difference = 0
        qdifference = 0
        n = len(num)
        half = n // 2
        for i in range(half):
            if num[i] == '?':
                qdifference += 1
            else:
                difference += int(num[i])

        for i in range(half, n):
            if num[i] == '?':
                qdifference -= 1
            else:
                difference -= int(num[i])
        if 2 * difference + 9 * qdifference == 0:
            return False
        else:
            return True