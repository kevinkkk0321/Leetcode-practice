# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    def inorderTraversal(self, root):
        """
        :type root: TreeNode
        :rtype: List[int]
        """
        result = []
        self.inorder(root, result)
        return result


    def inorder(self, root, result):
        if root is None:
            return
        if root.left:
            self.inorder(root.left, result)
        result.append(root.val)
        if root.right:
            self.inorder(root.right, result)
        
