class Solution:
    def removeDuplicates(self, s: str) -> str:
        st = []

        for i in range(len(s)):
            if not st or st[-1] != s[i]:
                st.append(s[i])
            else:
                st.pop()

        return ''.join(st)