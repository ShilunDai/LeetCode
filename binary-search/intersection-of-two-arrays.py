class Solution:
    def intersection(self, nums1: List[int], nums2: List[int]) -> List[int]:
        res = set()
        num1_set = set()

        for num in nums1:
            num1_set.add(num)

        for num in nums2:
            if num in num1_set:
                res.add(num)
        
        return list(res)