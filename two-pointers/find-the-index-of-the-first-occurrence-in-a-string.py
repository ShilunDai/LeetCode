class Solution:
    def findNext(self, next: List, s:str):
        next[0]=0
        j = 0

        for i in range(1, len(s)):
            while j>0 and s[i]!=s[j]:
                j = next[j-1]
            if s[i] == s[j]:
                j+=1
            next[i] = j

    def strStr(self, haystack: str, needle: str) -> int:
        next = [0]*len(needle)
        self.findNext(next, needle)
        j = 0

        for i in range(len(haystack)):
            while j>0 and haystack[i]!=needle[j]:
                j=next[j-1]

            if haystack[i] == needle[j]:
                j+=1
            
            if j==len(needle):
                return i-len(needle)+1
        return -1