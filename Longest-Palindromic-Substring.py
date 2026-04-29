1class Solution(object):
2    def longestPalindrome(self, s):
3        """
4        :type s: str
5        :rtype: str
6        """
7        if not s:
8            return ""
9        
10        start, end = 0, 0
11        
12        for i in range(len(s)):
13            len1 = self.expand(s, i, i)
14            len2 = self.expand(s, i, i + 1)
15            
16            max_len = max(len1, len2)
17            
18            if max_len > (end - start):
19                start = i - (max_len - 1) // 2
20                end = i + max_len // 2
21        
22        return s[start:end + 1]
23    
24    def expand(self, s, left, right):
25        while left >= 0 and right < len(s) and s[left] == s[right]:
26            left -= 1
27            right += 1
28        
29        return right - left - 1
30        