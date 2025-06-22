class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        if (magazine.size() < ransomNote.size()){
            return false;
        }

        int records[26]={0};
        for (char chara:magazine){
            records[chara-'a']++;
        }

        for (char chara:ransomNote){
            records[chara-'a']--;
            if (records[chara-'a']<0){
                return false;
            }
        }

        return true;
    }
};