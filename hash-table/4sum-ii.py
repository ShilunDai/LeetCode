class Solution:
    def fourSumCount(self, nums1: List[int], nums2: List[int], nums3: List[int], nums4: List[int]) -> int:
        records = {}
        count = 0
        
        for num_1 in nums1:
            for num_2 in nums2:
                if num_1+num_2 in records:
                    records[num_1+num_2]+=1
                else:
                    records[num_1+num_2]=1

        for num_3 in nums3:
            for num_4 in nums4:
                if 0-num_3-num_4 in records:
                    count+=records[0-num_3-num_4]

        return count