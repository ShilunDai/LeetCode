class Solution:
    def reverseWords(self, s: str) -> str:
        s = s[::-1]

        return ' '.join(word[::-1] for word in s.split())