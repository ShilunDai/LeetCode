class LinkedNode:
    def __init__(self, val = 0, next = None):
        self.val = val
        self.next = next

class MyLinkedList:

    def __init__(self):
        self.size = 0
        self.dummyhead = LinkedNode()

    def get(self, index: int) -> int:
        if index < 0 or index > self.size-1:
            return -1
        else:
            curr = self.dummyhead.next
            while index:
                curr = curr.next
                index-=1
            return curr.val
        
    def addAtHead(self, val: int) -> None:
        new = LinkedNode(val)
        new.next = self.dummyhead.next
        self.dummyhead.next = new
        self.size+=1

    def addAtTail(self, val: int) -> None:
        new = LinkedNode(val)
        curr = self.dummyhead
        while curr.next:
            curr = curr.next
        curr.next = new
        self.size+=1

    def addAtIndex(self, index: int, val: int) -> None:
        if index < 0 or index > self.size:
            return 
        else:
            new = LinkedNode(val)
            curr = self.dummyhead

            while index:
                curr = curr.next
                index -=1
            new.next = curr.next
            curr.next = new
            self.size+=1

    def deleteAtIndex(self, index: int) -> None:
        if index < 0 or index > self.size-1:
            return 
        else:
            curr = self.dummyhead
            while index:
                curr=curr.next
                index -=1
            curr.next = curr.next.next
            self.size-=1


# Your MyLinkedList object will be instantiated and called as such:
# obj = MyLinkedList()
# param_1 = obj.get(index)
# obj.addAtHead(val)
# obj.addAtTail(val)
# obj.addAtIndex(index,val)
# obj.deleteAtIndex(index)