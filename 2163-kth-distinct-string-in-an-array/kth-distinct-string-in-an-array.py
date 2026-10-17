class Solution:
    def kthDistinct(self, arr: list[str], k: int) -> str:
        freq = {}
        for string in arr:
            if string in freq:
                freq[string] += 1
            else:
                freq[string] = 1
        discountcount = 0
        for string in arr:
            if freq[string] == 1:
                discountcount += 1
                if discountcount == k:
                    return string

        return ""