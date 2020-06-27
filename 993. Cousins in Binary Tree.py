# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    def isCousins(self, root, x, y):
        """
        :type root: TreeNode
        :type x: int
        :type y: int
        :rtype: bool
        """
        if not root:
            return None

        m = collections.defaultdict(tuple)
        queue = collections.deque()
        depth = 0
        queue.append((root, None))

        while queue:
            for i in range(len(queue)):
                node, parent = queue.popleft()
                if not node:
                    continue
                m[node.val] = parent, depth
                queue.append((node.left, node))
                queue.append((node.right, node))
            depth += 1

        px, dx = m[x]
        py, dy = m[y]
        return px!=py and dx==dy
        
