
# problem 240 : Search2DMatrixII

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/201-300/240.Search2DMatrixII/problem.png"/>

## C++ Solution

```c++

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if (matrix.size() == 0) {
            return false;
        }
        int row = matrix.size();
        int col = matrix[0].size();
        int posX = 0;
        int posY = col - 1;
        while (posX < row && posY >= 0) {
            if (matrix[posX][posY] == target) {
                return true;
            }
            if (matrix[posX][posY] > target) {
                posY--;
            } else {
                posX++;
            }
        }
        return false;
    }
};

```

## C# Solution

```csharp

public class Solution {
    public bool SearchMatrix(int[,] matrix, int target) {
        if (matrix == null || matrix.GetLength(0) == 0) {
            return false;
        }
        int row = matrix.GetLength(0);
        int col = matrix.GetLength(1);
        int posX = 0;
        int posY = col - 1;
        while (posX < row && posY >= 0) {
            if (matrix[posX, posY] == target) {
                return true;
            }
            if (matrix[posX, posY] > target) {
                posY--;
            } else {
                posX++;
            }
        }
        return false;
    }
}

```

## Java Solution

```java

class Solution {
    public boolean searchMatrix(int[][] matrix, int target) {
        if (matrix == null || matrix.length == 0) {
            return false;
        }
        int row = matrix.length;
        int col = matrix[0].length;
        int posX = 0;
        int posY = col - 1;
        while (posX < row && posY >= 0) {
            if (matrix[posX][posY] == target) {
                return true;
            }
            if (matrix[posX][posY] > target) {
                posY--;
            } else {
                posX++;
            }
        }
        return false;
    }
}

```

## Python Solution

```python

class Solution:
    def binarySearch(self, matrix, target, left, right, up, down):
        if left > right or up > down:
            return False
        elif target < matrix[up][left] or target > matrix[down][right]:
            return False
        mid = left + (right - left) // 2
        row = up
        while row <= down and matrix[row][mid] <= target:
            if matrix[row][mid] == target:
                return True
            row += 1
        return self.binarySearch(matrix, target, left, mid - 1, row, down) or self.binarySearch(matrix, target, mid + 1, right, up, row - 1)


    def searchMatrix(self, matrix, target):
        if len(matrix) == 0:
            return False
        return self.binarySearch(matrix, target, 0, len(matrix[0]) - 1, 0, len(matrix) - 1)     

```




