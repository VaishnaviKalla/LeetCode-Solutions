class Solution(object):
    def maxSubArray(self, nums):
        maxi = nums[0]   
        res = nums[0]

        for i in range(1, len(nums)):
            maxi = max(nums[i], maxi + nums[i])  
            res = max(res, maxi)

        return res