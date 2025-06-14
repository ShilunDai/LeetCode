# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def detectCycle(self, head: Optional[ListNode]) -> Optional[ListNode]:
        dummyhead = ListNode()
        dummyhead.next = head
        slow = dummyhead
        fast = dummyhead

        while fast and fast.next:
            fast = fast.next.next
            slow = slow.next

            if fast==slow:
                index1=fast
                index2=dummyhead
                while index1 != index2:
                    index1 = index1.next
                    index2 = index2.next
                return index1
        return None