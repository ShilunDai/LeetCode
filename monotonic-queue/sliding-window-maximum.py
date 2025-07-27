class MyQue:
    def __init__(self):
        self.que = deque()
    def push(self, value: int):
        while len(self.que)!=0 and self.que[-1]<value:
            self.que.pop()
        self.que.append(value)
    def pop(self, value: int):
        if len(self.que)!=0 and self.que[0]==value:
            self.que.popleft()
    def front(self):
        return self.que[0]


class Solution:
    def maxSlidingWindow(self, nums: List[int], k: int) -> List[int]:
        result = []
        que = MyQue()

        for i in range(k):
            que.push(nums[i])
        
        result.append(que.front())

        for i in range(k, len(nums)):
            que.pop(nums[i-k])
            que.push(nums[i])
            result.append(que.front())
        
        return result