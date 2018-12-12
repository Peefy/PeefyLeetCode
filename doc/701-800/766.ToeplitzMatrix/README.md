
# problem 766 : ToeplitzMatrix

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/701-800/766.ToeplitzMatrix/problem.png"/>

## C++ Solution

```c++

static int pr = []() {
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution{
  public:
    bool isToeplitzMatrix(vector<vector<int>> &a){
        for (int i = 0; i < a.size() - 1; i++){
            for (int j = 0; j < a[i].size() - 1; j++){
                if (a[i][j] != a[i + 1][j + 1]){
                    return false;
                }
            }
        }
        return true;
    }
};

```

## C# Solution

```csharp

public class Solution {
    public bool IsToeplitzMatrix(int[,] a) {
        for (int i = 0; i < a.GetLength(0) - 1; i++){
            for (int j = 0; j < a.GetLength(1) - 1; j++){
                if (a[i, j] != a[i + 1, j + 1]){
                    return false;
                }
            }
        }
        return true;
    }
}

```

## Java Solution

```java

class Solution {
    public boolean isToeplitzMatrix(int[][] matrix) {
        int rows = matrix.length;
        int columns = matrix[0].length;
        int i = 0;  
        int j = 0;
        while (i + 1 < rows){
            while(j+1<columns){
                if (matrix[i][j] != matrix[i + 1][j + 1])
                    return false;
                j += 1;
            }
            j = 0;
            i += 1;
        }
        return true;
    }
}

```

## Python Solution

```python

class Solution:
    def isToeplitzMatrix(self, matrix):
        """
        :type matrix: List[List[int]]
        :rtype: bool
        """
        rows = len(matrix)
        columns = len(matrix[0])
        i = 0   
        j = 0
        while i + 1 < rows:
            while j + 1 < columns:
                if matrix[i][j] != matrix[i+1][j+1]:
                    return False
                j += 1
            j = 0
            i += 1
        return True

```





