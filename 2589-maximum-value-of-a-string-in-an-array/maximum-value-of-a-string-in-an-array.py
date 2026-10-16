class Solution:
    def maximumValue(self, strs: list[str]) -> int:
        maxValue = 0
        for s in strs:
            if s.isdigit():
                value = int(s)
            else:
                value = len(s)

            maxValue = max(maxValue, value)

        return maxValue