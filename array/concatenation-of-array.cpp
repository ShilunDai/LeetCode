class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> concatenation(nums.size()*2);

        copy(nums.begin(), nums.end(), concatenation.begin());
        copy(nums.begin(), nums.end(), concatenation.begin() + nums.size());
        
        return concatenation;
    }
};