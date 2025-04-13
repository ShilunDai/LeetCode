class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> result;

        copy(nums.begin(), nums.end(), back_inserter(result));
        copy(nums.begin(), nums.end(), back_inserter(result));
        
        return result;
        
    }
};