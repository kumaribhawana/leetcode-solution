class Solution:
    def maxDepth(self, root):
        if root is None:
            return 0

        leftHeight = self.maxDepth(root.left)
        rightHeight = self.maxDepth(root.right)

        return max(leftHeight, rightHeight) + 1

    def isBalanced(self, root):
        if root is None:
            return True

        leftHeight = self.maxDepth(root.left)
        rightHeight = self.maxDepth(root.right)

        if abs(leftHeight - rightHeight) > 1:
            return False

        return self.isBalanced(root.left) and self.isBalanced(root.right)