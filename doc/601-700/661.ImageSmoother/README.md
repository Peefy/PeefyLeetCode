
# problem 661 : ImageSmoother

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/601-700/661.ImageSmoother/problem.png"/>

## C++ Solution

```c++

static int x = []() {
    ios::sync_with_stdio(false); 
    cin.tie(NULL);              
    return 0;
}();

class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& M) {
        int m = M.size();
        int n = M[0].size();
        vector<vector<int>> N(m, vector<int>(n));
        for (int i = 0;i < m;++i)
            for (int j = 0;j < n;++j){
                int count = 1;
                N[i][j] = M[i][j];
                if (i - 1 >= 0 && j - 1 >= 0)
                    N[i][j] += M[i - 1][j - 1], count += 1;
                if (i - 1 >= 0 && j + 1 < n)
                    N[i][j] += M[i - 1][j + 1], count += 1;
                if (j - 1 >= 0)
                    N[i][j] += M[i][j - 1], count += 1;
                if (j + 1 < n)
                    N[i][j] += M[i][j + 1], count += 1;
                if (i + 1 < m && j + 1 < n)
                    N[i][j] += M[i + 1][j + 1], count += 1;
                if (i + 1 < m && j - 1 >= 0)
                    N[i][j] += M[i + 1][j - 1], count += 1;
                if (i + 1 < m)
                    N[i][j] += M[i + 1][j], count += 1;
                if (i - 1 >= 0)
                    N[i][j] += M[i - 1][j], count += 1;
                N[i][j] /= count;
            }
        return N;
    }
};

```

## C# Solution

```csharp

public class Solution {
    public int[,] ImageSmoother(int[,] M) {
        int m = M.GetLength(0);
        int n = M.GetLength(1);
        int[,] N = new int[m, n];
        for (int i = 0;i < m;++i)
            for (int j = 0;j < n;++j){
                int count = 1;
                N[i,j] = M[i,j];
                if (i - 1 >= 0 && j - 1 >= 0){
                    N[i,j] += M[i - 1,j - 1]; count += 1;
                }  
                if (i - 1 >= 0 && j + 1 < n){
                    N[i,j] += M[i - 1,j + 1]; count += 1;
                }       
                if (j - 1 >= 0){
                    N[i,j] += M[i,j - 1]; count += 1;
                }
                if (j + 1 < n){
                    N[i,j] += M[i,j + 1]; count += 1;
                }    
                if (i + 1 < m && j + 1 < n){
                    N[i,j] += M[i + 1,j + 1]; count += 1;
                }
                if (i + 1 < m && j - 1 >= 0){
                    N[i,j] += M[i + 1,j - 1]; count += 1;
                }
                if (i + 1 < m){
                    N[i,j] += M[i + 1,j]; count += 1;
                }
                if (i - 1 >= 0){
                    N[i,j] += M[i - 1,j]; count += 1;
                }
                N[i,j] /= count;
            }
        return N;
    }
}

```

## Java Solution

```java

class Solution {
    public int[][] imageSmoother(int[][] M) {
        int m = M.length;
        int n = M[0].length;
        int[][] N = new int[m][n];
        for (int i = 0;i < m;++i)
            for (int j = 0;j < n;++j){
                int count = 1;
                N[i][j] = M[i][j];
                if (i - 1 >= 0 && j - 1 >= 0){
                    N[i][j] += M[i - 1][j - 1]; count += 1;
                }  
                if (i - 1 >= 0 && j + 1 < n){
                    N[i][j] += M[i - 1][j + 1]; count += 1;
                }       
                if (j - 1 >= 0){
                    N[i][j] += M[i][j - 1]; count += 1;
                }
                if (j + 1 < n){
                    N[i][j] += M[i][j + 1]; count += 1;
                }    
                if (i + 1 < m && j + 1 < n){
                    N[i][j] += M[i + 1][j + 1]; count += 1;
                }
                if (i + 1 < m && j - 1 >= 0){
                    N[i][j] += M[i + 1][j - 1]; count += 1;
                }
                if (i + 1 < m){
                    N[i][j] += M[i + 1][j]; count += 1;
                }
                if (i - 1 >= 0){
                    N[i][j] += M[i - 1][j]; count += 1;
                }
                N[i][j] /= count;
            }
        return N;
    }
}

```

## Python Solution

```python

class Solution:
    def imageSmoother(self, M):
        """
        :type M: List[List[int]]
        :rtype: List[List[int]]
        """
        m = len(M)
        n = len(M[0])
        N = [[0 for j in range(n)] for i in range(m)]
        for i in range(m):
            for j in range(n):
                count = 1
                N[i][j] = M[i][j]
                if i - 1 >= 0 and j - 1 >= 0:
                    N[i][j] += M[i - 1][j - 1] #1
                    count += 1
                if i - 1 >= 0 and j + 1 < n:
                    N[i][j] += M[i - 1][j + 1] #3
                    count += 1
                if j - 1 >= 0:
                    N[i][j] += M[i][j - 1] #4
                    count += 1
                if j + 1 < n:
                    N[i][j] += M[i][j + 1] #5
                    count += 1
                if i + 1 < m and j + 1 < n:
                    N[i][j] += M[i + 1][j + 1] # 8
                    count += 1
                if i + 1 < m and j - 1 >= 0:
                    N[i][j] += M[i + 1][j - 1] #6
                    count += 1
                if i + 1 < m:
                    N[i][j] += M[i + 1][j] #7
                    count += 1
                if i - 1 >= 0:
                    N[i][j] += M[i - 1][j] #2
                    count += 1
                N[i][j] //= count 
        return N

```





