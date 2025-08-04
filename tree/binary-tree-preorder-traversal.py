# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def traversal(self, curr, vec):
        if curr == None:
            return
        vec.append(curr.val)
        self.traversal(curr.left, vec)
        self.traversal(curr.right, vec)
        
    def preorderTraversal(self, root: Optional[TreeNode]) -> List[int]:
        result = []
        self.traversal(root, result)
        return result