
# problem 463 : IslandPerimeter

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/401-500/463.IslandPerimeter/problem.png"/>

## C++ Solution

```c++

class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int count = 0;
        for (int i = 0; i < m; i++) {
            for (int j = 0;j < n; j++){
                if (grid[i][j] == 1) {
                    count += 4;
                    if (i + 1 < m && grid[i + 1][j] == 1) {
                        count -= 2;
                    }
                    if (j + 1 < n && grid[i][j + 1] == 1) {
                        count -= 2;
                    }
                }
            }
        }
        return count;
    }
};

```

## C# Solution

```csharp

public class Solution {
    public int IslandPerimeter(int[,] grid) {
        int m = grid.GetLength(0);
        int n = grid.GetLength(1);
        int count = 0;
        for (int i = 0; i < m; i++) {
            for (int j = 0;j < n; j++){
                if (grid[i, j] == 1) {
                    count += 4;
                    if (i + 1 < m && grid[i + 1, j] == 1) {
                        count -= 2;
                    }
                    if (j + 1 < n && grid[i, j + 1] == 1) {
                        count -= 2;
                    }
                }
            }
        }
        return count;
    }
}

```

## Java Solution

```java

class Solution {
    public int islandPerimeter(int[][] grid) {
        int m = grid.length;
        int n = grid[0].length;
        int count = 0;
        for (int i = 0; i < m; i++) {
            for (int j = 0;j < n; j++){
                if (grid[i][j] == 1) {
                    count += 4;
                    if (i + 1 < m && grid[i + 1][j] == 1) {
                        count -= 2;
                    }
                    if (j + 1 < n && grid[i][j + 1] == 1) {
                        count -= 2;
                    }
                }
            }
        }
        return count;
    }
}

```

## Python Solution

```python

class Solution:
    def getLength(self, grid, i, j, height, width):
        count = 0
        if grid[i][j] == 0:
            return count
        if j - 1 == -1:
            count += 1
        else:
            count += grid[i][j - 1] == 0
        if j + 1 == width:
            count += 1
        else:
            count += grid[i][j + 1] == 0
        if i - 1 == -1:
            count += 1
        else:
            count += grid[i - 1][j] == 0
        if i + 1 == height:
            count += 1
        else:
            count += grid[i + 1][j] == 0
        return count

    def islandPerimeter(self, grid):
        """
        :type grid: List[List[int]]
        :rtype: int
        """
        count = 0
        height = len(grid)
        width = len(grid[0])
        for i in range(height):
            for j in range(width):
                count += self.getLength(grid, i, j, height, width)
        return count

```





