class Solution:
    def minOperations(self, s: str) -> int:
        n = len(s)

        if s == ''.join(sorted(s)):
            return 0

        if n == 2:
            return -1

        first = s[0]
        last = s[-1]
        minu = min(s)
        maxu = max(s)

        if first == minu or last == maxu:
            return 1

        if first == maxu and last == minu:
            if s.count(minu) > 1 or s.count(maxu) > 1:
                return 2
            return 3

        return 2
