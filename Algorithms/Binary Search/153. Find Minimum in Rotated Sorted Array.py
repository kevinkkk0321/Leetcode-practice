class Solution(object):
    def findMin(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        l = 0
        h = len(nums)-1

        while l<h:
            mid=(l+h)/2

            if nums[mid]<nums[h]:
                h=mid

            else:
                l=mid+1

        return nums[h]


#         if not nums:
#             return 0

#         left, right = 0, len(nums)-1
#         min_ = float("inf")

#         while left<=right:
#             mid = left+(right-left)//2

#             if nums[mid]<min_:
#                 min_ = nums[mid]

#             if nums[mid]>nums[right]:
#                 left = mid+1
#             else:
#                 right=mid-1
#         return min_
