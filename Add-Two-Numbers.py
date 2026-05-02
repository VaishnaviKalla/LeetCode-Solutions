1# Definition for singly-linked list.
2# class ListNode(object):
3#     def __init__(self, val=0, next=None):
4#         self.val = val
5#         self.next = next
6class Solution(object):
7    def addTwoNumbers(self, l1, l2):
8        """
9        :type l1: Optional[ListNode]
10        :type l2: Optional[ListNode]
11        :rtype: Optional[ListNode]
12        """
13        dummy = ListNode(0)
14        current = dummy
15        carry = 0
16
17        while l1 or l2 or carry:
18            val1 = l1.val if l1 else 0
19            val2 = l2.val if l2 else 0
20
21            total = val1 + val2 + carry
22            carry = total // 10
23
24            current.next = ListNode(total % 10)
25            current = current.next
26
27            if l1:
28                l1 = l1.next
29            if l2:
30                l2 = l2.next
31
32        return dummy.next
33        