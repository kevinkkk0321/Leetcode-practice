class Solution(object):
    def maxArea(self, height):
        """
        :type height: List[int]
        :rtype: int
        """

        left, right = 0, len(height) - 1
        res = 0

        while left < right:
            cont = min(height[left], height[right]) * (right - left)
            if cont > res:
                res = cont

            if height[left] > height[right]:
                right -= 1
            else:
                 left += 1
        return res
        
