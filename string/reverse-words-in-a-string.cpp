class Solution {
public:
    void reverse(string& s, int start, int end){
        while (start < end){
            swap(s[start++], s[end--]);
        }
    }

    void removeExtraSpaces(string& s){
        int slow = 0;

        for (int i=0; i<s.size(); i++){
            if(s[i]!=' '){
                if (slow>0){
                    s[slow++] = ' ';
                }

                while (i< s.size() && s[i] != ' '){
                    s[slow++] = s[i++];
                }
            }
        }
        s.resize(slow);
    }
    string reverseWords(string s) {
        removeExtraSpaces(s);
        reverse(s, 0, s.size()-1);
        int j = 0;

        for (int i = 0; i <= s.size(); i++){
            if (s[i] == ' ' || i==s.size()){
                reverse(s, j, i-1);
                j=i+1;
            }
        }

        return s;
    }
};