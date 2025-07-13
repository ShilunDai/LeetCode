class Solution:
    def repeatedSubstringPattern(self, s: str) -> bool:
        next = [0] * len(s)
        j = 0

        for i in range(1, len(s)):
            while j>0 and s[i]!=s[j]:
                j=next[j-1]
            if s[i]==s[i]:
                j+=1
            next[i]=j
        return next[-1]!=0 and len(s)%(len(s)-next[-1])==0