class Solution:
    def numberOfLines(self, widths: List[int], s: str) -> List[int]:
        current = 1
        cw = 0

        for ch in s:
            width = widths[ord(ch) - ord('a')]

            if cw + width > 100:
                current = current + 1
                cw = width
            else:
                cw = cw + width

        return [current, cw]