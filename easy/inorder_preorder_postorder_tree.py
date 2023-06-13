# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    #Binary Tree Inorder Traversal
    def inorderTraversal(self, root: Optional[TreeNode]) -> List[int]:
        def inorderHelper(node: Optional[TreeNode], traversal: List[int]) -> None:
            if not node:
                return
            inorder_helper(node.left, traversal)
            traversal.append(node.val)
            inorder_helper(node.right, traversal)

        traversal = []
        inorder_helper(root, traversal)
        return traversal

    #Binary Tree Preorder Traversal
    def preorderTraversal(self, root: Optional[TreeNode]) -> List[int]:
        def preorderHelper(node: Optional[TreeNode], traversal: List[int])-> None:
            if not node:
                return
            traversal.append(node.val)
            preorderHelper(node.left, traversal)
            preorderHelper(node.right, traversal)

        traversal = []
        preorderHelper(root, traversal)
        return traversal

    #Binary Tree Postorder Traversal
    def postorderTraversal(self, root: Optional[TreeNode]) -> List[int]:
        def postorderHeler(node:Optional[TreeNode], traversal: List[int]) -> None:
            if not node:
                return
            postorderHeler(node.left, traversal)
            postorderHeler(node.right, traversal)
            traversal.append(node.val)

        traversal = []
        postorderHeler(root, traversal)
        return traversal
