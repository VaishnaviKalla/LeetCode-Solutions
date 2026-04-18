class Solution(object):
    def isPalindrome(self, x):
        """
        :type x: int
        :rtype: bool
        """
        if x<0:
            return False

        x = str(x)
        n = len(x)
        for i in range(n//2):
            if x[i] != x[n-i-1]:
                return False
    
        return True
        