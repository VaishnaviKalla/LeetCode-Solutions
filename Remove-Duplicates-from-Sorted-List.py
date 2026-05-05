1# Definition for singly-linked list.
2# class ListNode(object):
3#     def __init__(self, val=0, next=None):
4#         self.val = val
5#         self.next = next
6class Solution(object):
7    def deleteDuplicates(self, head):
8        """
9        :type head: Optional[ListNode]
10        :rtype: Optional[ListNode]
11        """
12        current = head
13        
14        while current and current.next:
15            if current.val == current.next.val:
16                current.next = current.next.next
17            else:
18                current = current.next
19                
20        return head
21        