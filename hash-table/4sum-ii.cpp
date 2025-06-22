class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        unordered_map<int, int> records;
        int count = 0;

        for (int numA:nums1){
            for (int numB:nums2){
                records[numA+numB]++;
            }
        }

        for (int numC:nums3){
            for (int numD:nums4){ 
                int key = 0-numC-numD;
                if (records.find(key) != records.end()){
                    count+=records[key];
                }
            }
        }
        return count;
    }
};