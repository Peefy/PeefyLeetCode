
# Problem 48 : RotateImage

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/1-100/48.RotateImage/problem.png"/>

先转置，再交换列

## C++ Solution

```c++

static int x = []() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        for(int i = 0; i < n - 1; i++){
            for(int j = i + 1; j < n; j++){
                auto tmp = matrix[i][j];
                matrix[i][j] = matrix[j][i];
                matrix[j][i] = tmp;
            }
        }
        
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n / 2; j++){
                auto tmp = matrix[i][j];
                matrix[i][j] = matrix[i][n-j-1];
                matrix[i][n-j-1] = tmp;
            }
        }     
    }
};

```

## C# Solution

```csharp

public class Solution {
    public void Rotate(int[,] matrix) {
        int n = matrix.GetLength(0);
        for(int i = 0; i < n - 1; i++){
            for(int j = i + 1; j < n; j++){
                var tmp = matrix[i, j];
                matrix[i, j] = matrix[j, i];
                matrix[j, i] = tmp;
            }
        }
        
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n / 2; j++){
                var tmp = matrix[i, j];
                matrix[i, j] = matrix[i,n-j-1];
                matrix[i, n-j-1] = tmp;
            }
        } 
    }
}

```

## Java Solution

```java

class Solution {
    public void rotate(int[][] matrix) {
        int rows = matrix.length;
        int columns = matrix[0].length;
        int temp = 0;
        
        //  Transpose
        for(int i = 0; i < rows; i++) {
            for(int j = 0; j != i; j++) {
                temp = matrix[i][j];
                matrix[i][j] = matrix[j][i];
                matrix[j][i] = temp;
            }
        }
        
        //  Swap Columns
        for(int i = 0; i < rows; i++) {
            for(int j = 0; j < columns/2 ; j++) {
                temp = matrix[i][j];
                matrix[i][j] = matrix[i][columns-1-j];
                matrix[i][columns-1-j] = temp;
            }
        }
    }
}

```

## Python Solution

```python

class Solution:
    def rotate(self, matrix) -> None:
        """
        Do not return anything, modify matrix in-place instead.
        """
        c = len(matrix)
        matrix[:] = [[matrix[c-i-1][j] for i in range(c)] for j in range(c)]



```


