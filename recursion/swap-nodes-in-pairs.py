# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def swapPairs(self, head):
        """
        :type head: Optional[ListNode]
        :rtype: Optional[ListNode]
        """

        dummyhead = ListNode()
        dummyhead.next = head
        curr = head
        pre = dummyhead

        while curr and curr.next:
            temp = curr.next
            pre.next = temp
            curr.next = temp.next
            temp.next = curr
            pre = curr
            curr = pre.next

        return dummyhead.next
        