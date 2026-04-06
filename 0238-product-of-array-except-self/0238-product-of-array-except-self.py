class Solution(object):
    def productExceptSelf(self, nums):
        n = len(nums)
        
        leftpro = [0] * n
        rightpro = [0] * n
        result = [0] * n
        
        leftpro[0] = 1
        for i in range(1, n):
            leftpro[i] = leftpro[i-1] * nums[i-1]
        
        rightpro[n-1] = 1
        for i in range(n-2, -1, -1):
            rightpro[i] = rightpro[i+1] * nums[i+1]
        
        for i in range(n):
            result[i] = leftpro[i] * rightpro[i]
        
        return result