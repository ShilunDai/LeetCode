class Solution:
    def generateMatrix(self, n: int) -> List[List[int]]:
        count = 1
        loop = n//2
        offset = 1
        result = [[0 for _ in range(n)] for _ in range(n)]
        startx = 0
        starty = 0

        while loop:
            for j in range(starty, n-offset):
                result[startx][j]=count
                count+=1
            for i in range(startx, n-offset):
                result[i][n-offset]=count
                count+=1
            for j in range(n-offset, starty, -1):
                result[n-offset][j]=count
                count+=1
            for i in range(n-offset, startx, -1):
                result[i][starty]=count
                count+=1
            startx+=1
            starty+=1
            loop-=1
            offset+=1
        if n%2==1:
            mid = n//2
            result[mid][mid]=count
        return result