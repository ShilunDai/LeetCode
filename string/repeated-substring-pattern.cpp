class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int len = s.size();
        int j=0;
        vector<int> next(len, 0);
        for (int i=1; i<len;i++){
            while (j>0 && s[i]!=s[j]){
                j = next[j-1];
            }
            if (s[i]==s[j]){
                j++;
            }
            next[i] = j;
        }

        return next[len-1]!=0 && len%(len-next[len-1])==0;
    }
};