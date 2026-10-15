
class Solution:
    def maxNumberOfBalloons(self, text: str) -> int:
        count = 0
        number = "balloon"

        for i in range(len(text)):
            if text[i] == "b":
                count = count+1

        ca = text.count("a")
        cl = text.count("l") // 2
        co = text.count("o") // 2
        cn = text.count("n")

        return min(count, ca, cl, co, cn)
