class Solution:
    def validateStackSequences(self, pushed: list[int], popped: list[int]) -> bool:
        i = 0
        j = 0
        st = []

        while i < len(pushed):
            st.append(pushed[i])
            i = i+ 1

            while st and j < len(popped) and popped[j] == st[-1]:
                st.pop()
                j = j+ 1

        return not st