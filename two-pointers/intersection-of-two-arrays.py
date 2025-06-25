class Solution:
    def intersection(self, nums1: List[int], nums2: List[int]) -> List[int]:
        set1=set()
        for num in nums1:
            set1.add(num)

        set2=set()
        for num in nums2:
            if num in set1:
                set2.add(num)

        return list(set2)
