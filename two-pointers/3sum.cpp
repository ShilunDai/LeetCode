class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> result;

        for (int i=0; i<nums.size(); ++i){
            if (i>0 and nums[i]==nums[i-1]){
                continue;
            }
            if (nums[i]>0){
                break;
            }
            int left=i+1;
            int right=nums.size()-1;

            while (left<right){
                int sum = nums[i]+nums[left]+nums[right];
                if (sum>0){
                    right--;
                }else if (sum<0){
                    left++;
                }else{
                    result.push_back(vector<int>{nums[i], nums[left], nums[right]});
                    while (left<right && nums[left]==nums[left+1]){
                        left++;
                    }
                    while (left<right && nums[right]==nums[right-1]){
                        right--;
                    }
                    left++;
                    right--;
                }
            }
        }
        return result;
    }
};