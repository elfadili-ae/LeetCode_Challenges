# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def diameterOfBinaryTree(self, root: Optional[TreeNode]) -> int:
        self.maxim = 0
        def diameterHelper(node):
            if not node:
                return 0

            left = diameterHelper(node.left)
            right = diameterHelper(node.right)
            self.maxim = max(self.maxim, left + right)

            return 1 + max(left, right)

        diameterHelper(root)
        return self.maxim
