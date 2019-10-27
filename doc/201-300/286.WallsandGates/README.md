
# problem 286 : WallsandGates

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/201-300/286.WallsandGates/problem.png"/>

## C++ Solution

```c++

class Solution {
public:
    void wallsAndGates(vector<vector<int>>& rooms) {
        if (rooms.size() == 0 || rooms[0].size() == 0)
            return;
        int m = rooms.size();
        int n = rooms[0].size();

        vector<vector<bool>> visited(m, vector<bool>(n, false));

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (rooms[i][j] == INT32_MAX) {
                    rooms[i][j] = search(rooms, visited, i, j, m, n);
                }
            }
        }
        return;
    }

    int search(vector<vector<int>>& rooms, vector<vector<bool>>& visited, int i, int j, int m, int n) {
        if (i < 0 || i > m - 1 || j < 0 || j > n - 1 || rooms[i][j] == -1)
            return INT32_MAX;
        if (rooms[i][j] == 0)
            return 0;
        if (visited[i][j])
            return rooms[i][j];
        visited[i][j] = true;

        if (rooms[i][j] > 0 && rooms[i][j] < INT32_MAX)
            return rooms[i][j];

        int up = search(rooms, visited, i - 1, j, m, n);
        int down = search(rooms, visited, i + 1, j, m, n);
        int left = search(rooms, visited, i, j - 1, m, n);
        int right = search(rooms, visited, i, j + 1, m, n);

        visited[i][j] = false;

        int val = min(min(up, down), min(left, right));
        return val == INT32_MAX ? val : val + 1;
    }
};

```

## C# Solution

```csharp

public class Solution {
    public void WallsAndGates(int[][] rooms) {
        if (rooms == null || rooms.Length == 0 || rooms[0] == null || rooms[0].Length == 0)
            return;
        int m = rooms.Length;
        int n = rooms[0].Length;

        var visited = new bool[m, n];

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (rooms[i][j] == int.MaxValue) {
                    rooms[i][j] = Search(rooms, visited, i, j, m, n);
                }
            }
        }
        return;
    }

    private int Search(int[][] rooms, bool[,] visited, int i, int j, int m, int n) {
        if (i < 0 || i > m - 1 || j < 0 || j > n - 1 || rooms[i][j] == -1)
            return int.MaxValue;
        if (rooms[i][j] == 0)
            return 0;
        if (visited[i, j])
            return rooms[i][j];
        visited[i, j] = true;

        if (rooms[i][j] > 0 && rooms[i][j] < int.MaxValue)
            return rooms[i][j];

        int up = Search(rooms, visited, i - 1, j, m, n);
        int down = Search(rooms, visited, i + 1, j, m, n);
        int left = Search(rooms, visited, i, j - 1, m, n);
        int right = Search(rooms, visited, i, j + 1, m, n);

        visited[i, j] = false;

        int min = Math.Min(Math.Min(up, down), Math.Min(left, right));
        return min == int.MaxValue ? min : min + 1;
    }
}

```

## Java Solution

```java

public class Solution {
    public void wallsAndGates(int[][] rooms) {
        if (rooms == null || rooms.length == 0 || rooms[0] == null || rooms[0].length == 0)
            return;
        int m = rooms.length;
        int n = rooms[0].length;

        boolean[][] visited = new boolean[m][n];

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (rooms[i][j] == Integer.MAX_VALUE) {
                    rooms[i][j] = search(rooms, visited, i, j, m, n);
                }
            }
        }
        return;
    }

    private int search(int[][] rooms, boolean[][] visited, int i, int j, int m, int n) {
        if (i < 0 || i > m - 1 || j < 0 || j > n - 1 || rooms[i][j] == -1)
            return Integer.MAX_VALUE;
        if (rooms[i][j] == 0)
            return 0;
        if (visited[i][j])
            return rooms[i][j];
        visited[i][j] = true;

        if (rooms[i][j] > 0 && rooms[i][j] < Integer.MAX_VALUE)
            return rooms[i][j];

        int up = search(rooms, visited, i - 1, j, m, n);
        int down = search(rooms, visited, i + 1, j, m, n);
        int left = search(rooms, visited, i, j - 1, m, n);
        int right = search(rooms, visited, i, j + 1, m, n);

        visited[i][j] = false;

        int min = Math.min(Math.min(up, down), Math.min(left, right));
        return min == Integer.MAX_VALUE ? min : min + 1;
    }
}


```

## Python Solution

```python

import math

class Solution:
    def search(self, rooms, visited, i, j, m, n):
        if i < 0 or i > m - 1 or j < 0 or j > n - 1 or rooms[i][j] == -1:
            return math.inf
        if rooms[i][j] == 0:
            return 0
        if visited[i][j] == 1:
            return rooms[i][j]
        visited[i][j] = 1
        if rooms[i][j] > 0 and rooms[i][j] < math.inf:
            return rooms[i][j]
        up = self.search(rooms, visited, i - 1, j, m, n)
        down = self.search(rooms, visited, i + 1, j, m, n)
        left = self.search(rooms, visited, i, j - 1, m, n)
        right = self.search(rooms, visited, i, j + 1, m, n)
        visited[i][j] = 0
        val = min(min(up, down), min(left, right))
        return val if val == math.inf else val + 1


    def wallsAndGates(self, rooms):
        if rooms is None or len(rooms) == 0 or rooms[0] is None or len(rooms[0]) == 0:
            return
        m = len(rooms)
        n = len(rooms[0])
        visited = [[0] * n for i in range(m)]
        for i in range(m):
            for j in range(n):
                if rooms[i][j] == math.inf:
                    rooms[i][j] = self.search(rooms, visited, i, j, m, n)
        return

```




