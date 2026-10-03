# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def checkTree(self, root):
        if root is None:
             return

        ans = root.val

        if root.left is not None and root.right is not None:
            return ans == root.left.val + root.right.val

        return False