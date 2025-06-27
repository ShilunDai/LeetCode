class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int startx = 0;
        int starty = 0;
        int offset = 1;
        int loop = n/2;
        int count = 1;

        vector<vector<int>> res(n, vector<int>(n,0));

        while (loop--){
            for (int j=startx;j<n-offset;++j){
                res[startx][j] = count++;
            }
            for (int i=starty;i<n-offset;++i){
                res[i][n-offset] = count++;
            }
            for (int j=n-offset;j>startx; --j){
                res[n-offset][j] = count++;
            }
            for (int i=n-offset;i>startx; --i){
                res[i][startx] = count++;
            }
            startx++;
            starty++;
            offset++;
        }

        if (n%2==1){
            int mid = n/2;
            res[mid][mid] = count++;
        }
        return res;
    }
};