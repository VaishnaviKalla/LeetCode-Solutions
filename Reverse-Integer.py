1class Solution(object):
2    def reverse(self, x):
3        """
4        :type x: int
5        :rtype: int
6        """
7        sign = -1 if x < 0 else 1
8        x = abs(x)
9        
10        rev = 0
11        while x != 0:
12            digit = x % 10
13            rev = rev * 10 + digit
14            x //= 10
15        
16        rev *= sign
17        
18        if rev < -2**31 or rev > 2**31 - 1:
19            return 0
20        
21        return rev
22        