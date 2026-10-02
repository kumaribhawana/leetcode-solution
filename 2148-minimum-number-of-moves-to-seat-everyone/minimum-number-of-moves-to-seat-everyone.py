class Solution:
    def minMovesToSeat(self, seats: list[int], students: list[int]) -> int:
        seats.sort()
        students.sort()
        total = 0
        for i in range (len(seats)):
            total += abs(seats[i] - students[i])
        return total