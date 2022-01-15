class Solution(object):
    def sortColors(self, nums):
        """
        :type nums: List[int]
        :rtype: None Do not return anything, modify nums in-place instead.
        """
        # Dutch National Flag problem
        p0, cur, p2 = 0, 0, len(nums)-1

        while cur<=p2:
            if nums[cur]==0:
                nums[p0], nums[cur] = nums[cur], nums[p0]
                p0+=1
                cur+=1
            elif nums[cur] == 1:
                cur+=1
            else:
                nums[p2], nums[cur] = nums[cur], nums[p2]
                p2-=1
        return nums


# two-pass algorithm using counting sort
#         count = [0]*3

#         for i in nums:
#             count[i] += 1
#         print(count)

#         index = 0
#         for i in range(len(count)):
#             while count[i]:
#                 nums[index] = i
#                 index+=1
#                 count[i] -= 1


#         return nums
