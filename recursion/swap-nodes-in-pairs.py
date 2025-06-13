# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def swapPairs(self, head: Optional[ListNode]) -> Optional[ListNode]:
        dummyhead = ListNode()
        dummyhead.next = head
        pre = dummyhead
        curr = head

        while curr and curr.next:
            temp = curr.next
            pre.next = temp
            curr.next = temp.next
            temp.next = curr

            pre = curr
            curr = pre.next

        return dummyhead.next