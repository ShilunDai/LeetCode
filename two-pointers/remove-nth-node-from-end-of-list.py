# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def removeNthFromEnd(self, head, n):
        """
        :type head: Optional[ListNode]
        :type n: int
        :rtype: Optional[ListNode]
        """
        dummyhead = ListNode(0)
        dummyhead.next = head
        fast = dummyhead
        slow = dummyhead

        while n:
            fast = fast.next
            n-=1
        while fast.next is not None:
            fast = fast.next
            slow = slow.next
        slow.next = slow.next.next

        return dummyhead.next