class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int startx = 0;
        int starty = 0;
        int offset = 1;
        int loop = n/2;
        int count = 1;

        vector<vector<int>> res(n, vector<int>(n,0));

        while (loop){
            int i = startx;
            int j = starty;

            for (;j<n-offset;++j){
                res[i][j] = count++;
            }
            for (;i<n-offset;++i){
                res[i][j] = count++;
            }
            for (;j>startx; --j){
                res[i][j] = count++;
            }
            for (;i>startx; --i){
                res[i][j] = count++;
            }
            startx++;
            starty++;
            offset++;
            loop--;
        }

        if (n%2==1){
            int mid = n/2;
            res[mid][mid] = count++;
        }
        return res;
    }
};