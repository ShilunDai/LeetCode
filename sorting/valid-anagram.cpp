class Solution {
public:
    bool isAnagram(string s, string t) {
        int hash[26];
        for (char chara:s){
            --hash[chara - 'a'];
        }

        for (char chara:t){
            ++hash[chara - 'a'];
        }

        for (int num : hash){
            if (num != 0){
                return false;
            }
        }
        return true;
    }
};