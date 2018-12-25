
# problem 892 : SurfaceArea

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/801-900/892.SurfaceArea/problem.png"/>

## C++ Solution

```c++

static int x = []() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    int surfaceArea(vector<vector<int>>& grid) {
        int result = 0;
        for(int i = 0; i < grid.size(); i++){
            for(int j = 0; j < grid[i].size(); j++){
                if (grid[i][j] != 0)
                    result += grid[i][j] * 4 + 2;
                if (i > 0)
                    result -= min(grid[i][j], grid[i - 1][j]) * 2;
                if (j > 0)
                    result -= min(grid[i][j], grid[i][j - 1]) * 2;
            }     
        }
        return result;
    }
};

```

## C# Solution

```csharp

public class Solution {
    public int SurfaceArea(int[][] grid) {
        int result = 0;
        for(int i = 0; i < grid.Length; i++){
            for(int j = 0; j < grid[i].Length; j++){
                if (grid[i][j] != 0)
                    result += grid[i][j] * 4 + 2;
                if (i > 0)
                    result -= Math.Min(grid[i][j], grid[i - 1][j]) * 2;
                if (j > 0)
                    result -= Math.Min(grid[i][j], grid[i][j - 1]) * 2;
            }     
        }
        return result;
    }
}

```

## Java Solution

```java

class Solution {
    public int surfaceArea(int[][] grid) {
        int result = 0;
        for(int i = 0; i < grid.length; i++){
            for(int j = 0; j < grid[i].length; j++){
                if (grid[i][j] != 0)
                    result += grid[i][j] * 4 + 2;
                if (i > 0)
                    result -= Math.min(grid[i][j], grid[i - 1][j]) * 2;
                if (j > 0)
                    result -= Math.min(grid[i][j], grid[i][j - 1]) * 2;
            }     
        }
        return result;
    }
}

```

## Python Solution

```python

class Solution:
    def surfaceArea(self, grid):
        """
        :type grid: List[List[int]]
        :rtype: int
        """
        result = 0
        for i in range(len(grid)):
            for j in range(len(grid[i])):
                if grid[i][j] != 0:
                    result += grid[i][j] * 4 + 2
                if i > 0:
                    result -= min(grid[i][j], grid[i - 1][j]) * 2
                if j > 0:
                    result -= min(grid[i][j], grid[i][j - 1]) * 2
        return result

```





