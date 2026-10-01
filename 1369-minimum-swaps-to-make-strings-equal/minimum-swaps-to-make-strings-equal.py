class Solution:
    def minimumSwap(self, s1: str, s2: str) -> int:

        countxy = 0
        countyx = 0

        for i in range(len(s1)):

            if s1[i] == 'x' and s2[i] == 'y':
                countxy += 1

            if s1[i] == 'y' and s2[i] == 'x':
                countyx += 1

        if (countxy + countyx) % 2 == 1:
            return -1

        
        res = countxy // 2 + countyx // 2
        res += (countxy % 2) + (countyx % 2)

        return res