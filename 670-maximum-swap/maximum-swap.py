class Solution:
    def maximumSwap(self, num: int) -> int:
        s = list(str(num))
        ans = str(num)

        for i in range(len(s)):
            for j in range (i+1,len(s)):
                s[i],s[j] = s[j],s[i]

                current = ''.join(s)

                if current > ans:
                   ans = current
                s[i],s[j] = s[j],s[i]

        return int(ans)
            