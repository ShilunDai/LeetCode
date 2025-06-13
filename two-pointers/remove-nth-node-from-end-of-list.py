# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def removeNthFromEnd(self, head: Optional[ListNode], n: int) -> Optional[ListNode]:
        dummyhead = ListNode()
        dummyhead.next = head
        slow = dummyhead
        fast = dummyhead

        while n:
            fast = fast.next
            n-=1
        
        while fast.next:
            slow = slow.next
            fast = fast.next

        slow.next = slow.next.next

        return dummyhead.next