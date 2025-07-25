class Solution {
public:
    void getNext(vector<int>& next, string& s){
        next[0]=0;
        int j=0;

        for(int i=1;i<s.size();i++){
            while (j>0 && s[i]!=s[j]){
                j=next[j-1];
            }
            if (s[i]==s[j]){
                j++;
            }
            next[i]=j;
        }
    }

    int strStr(string haystack, string needle) {
        vector<int> next(needle.size());
        getNext(next, needle);
        int j=0;

        for (int i=0; i<haystack.size(); i++){
            while (j>0 && haystack[i]!=needle[j]){
                j = next[j-1];
            }
            if (haystack[i]==needle[j]){
                j++;
            }
            if (j==needle.size()){
                return i-needle.size()+1;
            }
        }   
        return -1;
    }
};