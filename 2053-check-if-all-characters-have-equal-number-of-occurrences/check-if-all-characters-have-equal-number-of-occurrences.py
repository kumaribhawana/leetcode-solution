class Solution:
    def areOccurrencesEqual(self, s: str) -> bool:
        freq = {}
        for char in s:
            if char in freq:
                freq[char] += 1
            else:
                freq[char] = 1

        values = freq.values()
        first = next(iter(values))
        for value in values:
            if value != first:
                return False

        return True