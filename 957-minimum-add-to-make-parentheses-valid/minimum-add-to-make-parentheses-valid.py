class Solution:
    def minAddToMakeValid(self, s: str) -> int:
        ans = 0
        balace = 0
        for i in  range(len(s)):
            if s[i]=="(":
              balace += 1
            else:
              if balace == 0:
                ans += 1
              else :
                    balace -= 1

        return ans+balace