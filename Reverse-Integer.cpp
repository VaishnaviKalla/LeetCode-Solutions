1class Solution {
2public:
3    int reverse(int x) {
4        int rev = 0;
5        
6        while (x != 0) {
7            int digit = x % 10;
8            x /= 10;
9
10            if (rev > INT_MAX / 10 || rev < INT_MIN / 10) {
11                return 0;
12            }
13
14            rev = rev * 10 + digit;
15        }
16        
17        return rev;
18    }
19};