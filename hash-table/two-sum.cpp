class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> map;

        for (int i=0; i<nums.size();++i){
            int s = target-nums[i];
            if (map.find(s)!=map.end()){
                return {map.find(s)->second, i};
            }
            map.insert({pair<int, int>(nums[i], i)});
        }

        return {};
    }
};