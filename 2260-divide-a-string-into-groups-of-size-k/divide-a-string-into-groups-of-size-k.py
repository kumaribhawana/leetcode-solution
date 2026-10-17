class Solution:
    def divideString(self, s: str, k: int, fill: str) -> list[str]:
        answer = []
        for i in range(0, len(s), k):
            group = s[i:i + k]
            if len(group) < k:
                missing = k - len(group)
                group = group + fill * missing

            answer.append(group)
        return answer