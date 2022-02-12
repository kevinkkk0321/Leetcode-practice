"""
# Definition for a Node.
class Node(object):
    def __init__(self, val=0, left=None, right=None, next=None):
        self.val = val
        self.left = left
        self.right = right
        self.next = next
"""

class Solution(object):
    def connect(self, root):
        """
        :type root: Node
        :rtype: Node
        """
        if not root:
            return None
        dequenode = deque([root])

        while(dequenode):
            length = len(dequenode)
            for i in range(length):
                node = dequenode.popleft()

                if i<length-1:
                    node.next=dequenode[0]

                if node.left:
                    dequenode.append(node.left)
                if node.right:
                    dequenode.append(node.right)

        return root
