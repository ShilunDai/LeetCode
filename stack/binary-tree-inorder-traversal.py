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
        self.traversal(curr.left, vec)
        vec.append(curr.val)
        self.traversal(curr.right, vec)
        
    def inorderTraversal(self, root: Optional[TreeNode]) -> List[int]:
        result = []
        self.traversal(root, result)
        return result