# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    def levelOrder(self, root):
        """
        :type root: TreeNode
        :rtype: List[List[int]]
        """
        if not root:
            return []
        result_levels = []

        dequenode = deque([root])

        while dequenode:
            length = len(dequenode)
            level = []
            for i in range(length):
                node = dequenode.popleft()
                level.append(node.val)
                if node.left:
                    dequenode.append(node.left)
                if node.right:
                    dequenode.append(node.right)
            result_levels.append(level)

        return result_levels
        
