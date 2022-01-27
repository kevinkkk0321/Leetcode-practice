class Solution(object):
    def numberOfArithmeticSlices(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        opt, i = [0,0], 1
        for j in range(2,len(nums)):
            if nums[j]-nums[j-1] == nums[j-1]-nums[j-2]:
                opt.append(opt[j-1]+i)
                i += 1
            else:
                opt.append(opt[j-1])
                i = 1
        return opt[-1]

#         ### backtracking
#         if len(nums)<= 2 or not nums:
#             return 0

#         res = []

#         def backtracking(res, tmp, start):
#             if len(tmp) >= 3:
#                 if tmp[-2]-tmp[-3] == tmp[-1]-tmp[-2]:
#                     # print(tmp)
#                     res.append(list(tmp))
#                 else:
#                     return
#             if len(tmp) >= len(nums):
#                 return
#             for i in range(start, len(nums)):
#                 if len(tmp) >= 3:
#                     if nums[i] - tmp[-1] == tmp[-1] - tmp[-2]:
#                         tmp.append(nums[i])
#                     else:
#                         continue
#                 else:
#                     tmp.append(nums[i])
#                 start+=1
#                 backtracking(res, tmp, start)
#                 tmp.pop()

#         backtracking(res, [], 0)

#         return len(res)
        
