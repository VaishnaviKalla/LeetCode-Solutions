1class Solution(object):
2    def addBinary(self, a, b):
3        """
4        :type a: str
5        :type b: str
6        :rtype: str
7        """
8        i = len(a) - 1
9        j = len(b) - 1
10        carry = 0
11        result = []
12
13        while i >= 0 or j >= 0 or carry:
14            total = carry
15
16            if i >= 0:
17                total += int(a[i])
18                i -= 1
19
20            if j >= 0:
21                total += int(b[j])
22                j -= 1
23
24            result.append(str(total % 2))
25            carry = total // 2
26
27        return ''.join(result[::-1])
28        