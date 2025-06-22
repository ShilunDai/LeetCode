class Solution:
    def canConstruct(self, ransomNote: str, magazine: str) -> bool:
        if len(magazine) < len(ransomNote):
            return False

        records = [0]*26

        for char in magazine:
            records[ord(char) - ord('a')]+=1
        for char in ransomNote:
            records[ord(char) - ord('a')]-=1
            if records[ord(char) - ord('a')]<0:
                return False
        return True