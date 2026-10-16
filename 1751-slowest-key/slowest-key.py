
class Solution:
    def slowestKey(self, releaseTimes: list[int], keysPressed: str) -> str:
        maxDuration = 0
        answer = keysPressed[0]
        n = len(keysPressed)

        for i in range(n):
            if i == 0:
                duration = releaseTimes[0]
            else:
                duration = releaseTimes[i] - releaseTimes[i - 1]

            if duration > maxDuration:
                maxDuration = duration
                answer = keysPressed[i]

            elif duration == maxDuration:
                if keysPressed[i] > answer:
                    answer = keysPressed[i]

        return answer
