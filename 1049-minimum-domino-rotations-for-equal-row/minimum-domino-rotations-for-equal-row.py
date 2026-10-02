class Solution:
    def minDominoRotations(self, tops: list[int], bottoms: list[int]) -> int:

        candidate1 = tops[0]
        candidate2 = bottoms[0]

        def check(candidate, make_top):

            count = 0

            for i in range(len(tops)):

                if make_top:
                    if tops[i] == candidate:
                        pass
                    elif bottoms[i] == candidate:
                        count += 1
                    else:
                        return -1

                else:
                    if bottoms[i] == candidate:
                        pass
                    elif tops[i] == candidate:
                        count += 1
                    else:
                        return -1

            return count

        a = check(candidate1, True)
        b = check(candidate1, False)
        c = check(candidate2, True)
        d = check(candidate2, False)

        ans = []

        if a != -1:
            ans.append(a)
        if b != -1:
            ans.append(b)
        if c != -1:
            ans.append(c)
        if d != -1:
            ans.append(d)

        if len(ans) == 0:
            return -1

        return min(ans)