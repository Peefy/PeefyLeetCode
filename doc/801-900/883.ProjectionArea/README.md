
# problem 883 : ProjectionArea

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/801-900/883.ProjectionArea/problem.png"/>

## C++ Solution

```c++

static int x = []() {
    ios::sync_with_stdio(false); 
    cin.tie(NULL);              
    return 0;
}();

class Solution {
public:
    int projectionArea(vector<vector<int>>& grid) {
        int area = 0;
        for (int i = 0; i < grid.size(); i++) {
            int xy = 0, yz = 0, xz = 0;
            for (int j = 0; j < grid[0].size(); j++) {
                xy += grid[i][j] == 0 ? 0 : 1;
                yz = max(yz, grid[i][j]);
                xz = max(xz, grid[j][i]);
            }
            area += (xy + yz + xz);
        }       
        return area;
    }
};

```

## C# Solution

```csharp

public class Solution {
    public int ProjectionArea(int[][] grid) {
        int area = 0;
        for (int i = 0; i < grid.Length; i++) {
            int xy = 0, yz = 0, xz = 0;
            for (int j = 0; j < grid[0].Length; j++) {
                xy += grid[i][j] == 0 ? 0 : 1;
                yz = Math.Max(yz, grid[i][j]);
                xz = Math.Max(xz, grid[j][i]);
            }
            area += (xy + yz + xz);
        }       
        return area;
    }
}

```

## Java Solution

```java

class Solution {
    public int projectionArea(int[][] grid) {
        int area = 0;
        for (int i = 0; i < grid.length; i++) {
            int xy = 0, yz = 0, xz = 0;
            for (int j = 0; j < grid[0].length; j++) {
                xy += grid[i][j] == 0 ? 0 : 1;
                yz = Math.max(yz, grid[i][j]);
                xz = Math.max(xz, grid[j][i]);
            }
            area += (xy + yz + xz);
        }       
        return area;
    }
}

```

## Python Solution

```python

class Solution:
    def projectionArea(self, grid):
        """
        :type grid: List[List[int]]
        :rtype: int
        """
        area = 0
        for i in range(len(grid)):
            xy, yz, xz = 0, 0, 0
            for j in range(len(grid[0])):
                xy += 0 if grid[i][j] == 0 else 1
                yz = max(yz, grid[i][j])
                xz = max(xz, grid[j][i])
            area += (xy + yz + xz)
        return area 

```





