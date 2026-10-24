class Solution:
    def countDaysTogether(self, arriveAlice: str, leaveAlice: str, arriveBob: str, leaveBob: str) -> int:
        days = [31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
        def convert (data):
            month, day = map(int,data.split("-"))
            return sum (days[:month -1])+ day
        start = max(convert(arriveAlice),convert(arriveBob))
        end = min(convert(leaveAlice),convert(leaveBob))

        return max(0,end-start + 1)