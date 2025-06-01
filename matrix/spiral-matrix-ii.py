class Solution(object):
    def generateMatrix(self, n):
        """
        :type n: int
        :rtype: List[List[int]]
        """

        startx = 0
        starty = 0
        offset = 1
        loop = n//2
        result = [[0 for _ in range(n)] for _ in range(n)]
        count = 1

        while loop:
            i = startx
            j = starty

            while j < n-offset:
                result[i][j] = count
                count+=1
                j+=1
            while i < n-offset:
                result[i][j] = count
                count+=1
                i+=1
            while j > startx:
                result[i][j] = count
                count+=1
                j-=1
            while i > startx:
                result[i][j] = count
                count+=1
                i-=1
            startx+=1
            starty+=1
            offset+=1
            loop-=1
        
        if n%2==1:
            mid = n//2
            result[mid][mid] = count
        
        return result



        