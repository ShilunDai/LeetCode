class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        nums.sort()
        result=[]

        for i in range(len(nums)):
            left=i+1
            right=len(nums)-1
            if i!=0 and nums[i]==nums[i-1]:
                continue
            if nums[i]>0:
                break

            while left<right:
                sum = nums[i]+nums[left]+nums[right]

                if sum>0:
                    right-=1
                elif sum<0:
                    left+=1
                else:
                    result.append([nums[i], nums[left], nums[right]])
                    while left<right and nums[left+1]==nums[left]:
                        left+=1
                    while left<right and nums[right-1]==nums[right]:
                        right-=1
                    left+=1
                    right-=1
        return result