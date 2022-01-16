class Solution(object):
    def findKthLargest(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: int
        """
        # method 1: quick selection
        return self.findKthSmallest(nums, 0, len(nums) - 1, len(nums) - k + 1 - 1)

    def findKthSmallest(self, nums, left, right, k):  # k is one-base indexing
        def partition(left, right, pivotIndex):
            pivot = nums[pivotIndex]

            # Move pivot to the right most
            nums[right], nums[pivotIndex] = nums[pivotIndex], nums[right]
            pivotIndex = left

            # Swap elements less than pivot to the left
            for i in range(left, right):
                if nums[i] < pivot:
                    nums[pivotIndex], nums[i] = nums[i], nums[pivotIndex]
                    pivotIndex += 1

            # Move pivot to the right place
            nums[pivotIndex], nums[right] = nums[right], nums[pivotIndex]
            return pivotIndex

        if left == right:
            return nums[left]

        pivotIndex = random.randint(left, right)  # Rand between [left, right]
        pivotIndex = partition(left, right, pivotIndex)
        if pivotIndex == k:
            return nums[pivotIndex]
        if k < pivotIndex:
            return self.findKthSmallest(nums, left, pivotIndex - 1, k)
        return self.findKthSmallest(nums, pivotIndex + 1, right, k)

        # method 2: inbuild heap function
        # return heapq.nlargest(k, nums)[-1]

        # method 3: inbuild sorting function
        # return sorted(nums)[-k]

        # method 4: quick sort
#         left = 0
#         right = len(nums)-1
#         self.quicksort(nums, left, right)
#         return nums[-k]

#     def quicksort(self, nums, left, right):
#         if left>=right:
#             return
#         index = left
#         pivot = nums[right]

#         for i in range(index, right):
#             if nums[i]<pivot:
#                 nums[index], nums[i] = nums[i], nums[index]
#                 index+=1
#         nums[index], nums[right] = nums[right], nums[index]

#         self.quicksort(nums, left, index-1)
#         self.quicksort(nums, index+1, right)
        
