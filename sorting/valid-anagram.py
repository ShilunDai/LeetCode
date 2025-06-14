class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        res = [0] * 26

        for char in s:
            res[ord(char) - ord('a')]+=1
        for char in t:
            res[ord(char) - ord('a')]-=1
        for num in res:
            if num!=0:
                return False

        return True