class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> set1(nums1.begin(), nums1.end());
        unordered_set<int> res;

        for(int i=0; i<nums2.size();++i){
            if (set1.find(nums2[i])!=set1.end()){
                res.insert(nums2[i]);
            }
        }

        return vector<int>(res.begin(), res.end());
    }
};