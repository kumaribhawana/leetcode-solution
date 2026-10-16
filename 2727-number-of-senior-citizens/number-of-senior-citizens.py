class Solution:
    def countSeniors(self, details: list[str]) -> int:
        count = 0
        for detail in details:
            age = detail[11:13]
            age = int(age)
            if age > 60:
                count = count + 1

        return count
