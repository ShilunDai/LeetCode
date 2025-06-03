class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size();

        while (left < right){
            int middle = (right + left) / 2;

            if (target < nums[middle]){
                right = middle;
            }else if (target > nums[middle]){
                left = middle + 1;
            }else{return middle;}
        }

        return -1;
        
    }
};