class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        records = {}
        for i in range(len(nums)):
            s = target - nums[i]
            if s in records:
                return [records[s], i]
            records[nums[i]] = i

        return []