# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    def isValidBST(self, root):
        """
        :type root: TreeNode
        :rtype: bool
        """
        return self.DFS_helper(root, float('-inf'), float('inf'))
        
    def DFS_helper(self, root, min, max):
        if not root:
            return True
        if root.val >= max or root.val <= min:
            return False
        return self.DFS_helper(root.left, min, root.val) and self.DFS_helper(root.right, root.val, max)