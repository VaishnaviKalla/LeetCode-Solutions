1class Solution(object):
2    def mySqrt(self, x):
3        """
4        :type x: int
5        :rtype: int
6        """
7        if x < 2:
8            return x
9        
10        left, right = 1, x // 2
11        
12        while left <= right:
13            mid = (left + right) // 2
14            square = mid * mid
15            
16            if square == x:
17                return mid
18            elif square < x:
19                left = mid + 1
20            else:
21                right = mid - 1
22        
23        return right
24        