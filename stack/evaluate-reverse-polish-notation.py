class Solution:
    def evalRPN(self, tokens: List[str]) -> int:
        st = []

        for token in tokens:
            if token in "+-*/":
                num1=st.pop()
                num2=st.pop()
                result = eval(num2+token+num1)
                st.append(str(int(result)))
            else:
                st.append(token)
        return int(st[0])