class Solution:
    def numRabbits(self, answers: list[int]) -> int:
        total = 0
        freq = {}
        for x in  answers:
           if x not in freq:
            freq[x] = 1
           else:
            freq[x] += 1
        for x in freq:
            group_size = x+1
            count = freq[x]

            groups = (count + group_size - 1) // group_size

            total += groups * group_size
        return total