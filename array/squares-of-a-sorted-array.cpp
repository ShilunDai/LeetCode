class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int left = 0;
        int right = nums.size() - 1;
        vector<int> res(nums.size(),0);
        int i = nums.size() - 1;

        while (left <= right){
            if (nums[left] * nums[left] < nums[right] * nums[right]){
                res[i] = nums[right] * nums[right];
                right--;
            } else {
                res[i] = nums[left] * nums[left];
                left++;
            }
            i--;
        }
        return res;
    }
};