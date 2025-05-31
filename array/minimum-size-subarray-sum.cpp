class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i=0;
        int sum = 0;
        int length = INT32_MAX;

        for (int j=0; j<nums.size();++j){
            sum+=nums[j];

            while(sum>=target){
                length = length<(j-i+1)?length:(j-i+1);
                sum-=nums[i++];
            }
        }

        return length==INT32_MAX?0:length;
    }
};