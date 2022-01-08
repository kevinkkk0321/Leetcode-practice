# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    def zigzagLevelOrder(self, root):
        """
        :type root: TreeNode
        :rtype: List[List[int]]
        """
        if not root:
            return []

        result_levels = []

        dequeNode = deque([root])
        count = 0

        while dequeNode:
            tmp_level = []
            for i in range(len(dequeNode)):
                node = dequeNode.popleft()
                tmp_level.append(node.val)
                if node.left:
                    dequeNode.append(node.left)
                if node.right:
                    dequeNode.append(node.right)
            if count % 2 == 0:
                result_levels.append(tmp_level)
            else:
                result_levels.append(tmp_level[::-1]) # <object>[first_index:last_index:step]
            count += 1

        return result_levels
