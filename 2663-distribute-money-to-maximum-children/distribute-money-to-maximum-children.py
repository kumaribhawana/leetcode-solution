class Solution:
    def distMoney(self, money: int, children: int) -> int:
        if money < children:
            return -1
        money -= children
        count = min(money // 7,children)
        money -= count*7
        children -= count
        if children ==0 and money>0:
            return count -1
        if children ==1 and money==3:
            return count -1
        return count