
# Problem 59 : SpiralMatrixII

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/1-100/59.SpiralMatrixII/problem.png"/>

## C++ Solution

```c++

static int x = []() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int row_start = 0;
        int row_end = n - 1;
        int col_start = 0;
        int col_end = n - 1;
        vector<vector<int>> result = vector<vector<int>>(n, vector<int>(n, 0));
        int count = 1;
        while (row_start <= row_end && col_start <= col_end){
            for (int i = col_start;i < col_end + 1;i++){
                result[row_start][i] = count;
                count += 1;
            }
            row_start += 1;
            for (int i = row_start;i < row_end + 1;i++){
                result[i][col_end] = count;
                count += 1;
            }
            col_end -= 1;
            for (int i = col_end;i > col_start - 1;i--){
                result[row_end][i] = count;
                count += 1;
            }
            row_end -= 1;
            for (int i = row_end;i > row_start - 1;i--){
                result[i][col_start] = count;
                count += 1;
            }
            col_start += 1;
        }
        return result;
    }
};

```

## C# Solution

```csharp

public class Solution {
    public int[,] GenerateMatrix(int n) {
        int row_start = 0;
        int row_end = n - 1;
        int col_start = 0;
        int col_end = n - 1;
        int[,] result = new int[n,n];
        int count = 1;
        while (row_start <= row_end && col_start <= col_end){
            for (int i = col_start;i < col_end + 1;i++){
                result[row_start,i] = count;
                count += 1;
            }
            row_start += 1;
            for (int i = row_start;i < row_end + 1;i++){
                result[i,col_end] = count;
                count += 1;
            }
            col_end -= 1;
            for (int i = col_end;i > col_start - 1;i--){
                result[row_end,i] = count;
                count += 1;
            }
            row_end -= 1;
            for (int i = row_end;i > row_start - 1;i--){
                result[i,col_start] = count;
                count += 1;
            }
            col_start += 1;
        }
        return result;
    }
}

```

## Java Solution

```java

class Solution {
    public int[][] generateMatrix(int n) {
        int row_start = 0;
        int row_end = n - 1;
        int col_start = 0;
        int col_end = n - 1;
        int[][] result = new int[n][n];
        int count = 1;
        while (row_start <= row_end && col_start <= col_end){
            for (int i = col_start;i < col_end + 1;i++){
                result[row_start][i] = count;
                count += 1;
            }
            row_start += 1;
            for (int i = row_start;i < row_end + 1;i++){
                result[i][col_end] = count;
                count += 1;
            }
            col_end -= 1;
            for (int i = col_end;i > col_start - 1;i--){
                result[row_end][i] = count;
                count += 1;
            }
            row_end -= 1;
            for (int i = row_end;i > row_start - 1;i--){
                result[i][col_start] = count;
                count += 1;
            }
            col_start += 1;
        }
        return result;
    }
}

```

## Python Solution

```python

class Solution:
    def generateMatrix(self, n):
        matrix = [([0] * n) for i in range(n)]
        total = n * n
        i = 0
        j = 0
        lrbound = [0, n]
        udbound = [0, n]
        shunxu = 0
        count = 1
        while count <= total:
            if shunxu == 0:
                while i >= lrbound[0] and i < lrbound[1] and j >= udbound[0] and j < udbound[1]:
                    matrix[j][i] = count
                    count += 1
                    i += 1
                else:
                    j += 1
                    i -= 1
                    udbound[0] += 1
                    shunxu = 1
            elif shunxu == 1:
                while i >= lrbound[0] and i < lrbound[1] and j >= udbound[0] and j < udbound[1]:
                    matrix[j][i] = count
                    count += 1
                    j += 1
                else:
                    i -= 1
                    j -= 1
                    lrbound[1] -= 1
                    shunxu = 2
            elif shunxu == 2:
                while i >= lrbound[0] and i < lrbound[1] and j >= udbound[0] and j < udbound[1]:
                    matrix[j][i] = count
                    count += 1
                    i -= 1
                else:
                    j -= 1
                    i += 1
                    udbound[1] -= 1
                    shunxu = 3
            else:
                while i >= lrbound[0] and i < lrbound[1] and j >= udbound[0] and j < udbound[1]:
                    matrix[j][i] = count
                    count += 1
                    j -= 1
                else:
                    i += 1
                    j += 1
                    lrbound[0] += 1
                    shunxu = 0   
        return matrix

```


