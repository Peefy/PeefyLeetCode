
# problem 840 : MagicSquaresInGrid

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/801-900/840.MagicSquaresInGrid/problem.png"/>

## C++ Solution

```c++

static int x = []() {
    ios::sync_with_stdio(false); 
    cin.tie(NULL);              
    return 0;
}();

class Solution {
public:
    int numMagicSquaresInside(vector<vector<int>>& grid) {
        int count = 0;
        int n = grid.size() - 1;
        set<string> mat = {"43891276","83419672","67219834","27691438","49237816","29473618","61873294","81637492"};
        for(int i = 1; i < n; i++){
            for(int j = 1; j < n; j++){
                if (grid[i][j] == 5){
                    string m = string("");
                    m.push_back((char)(grid[i-1][j-1] + '0'));
                    m.push_back((char)(grid[i-1][j] + '0'));
                    m.push_back((char)(grid[i-1][j+1] + '0'));
                    m.push_back((char)(grid[i][j-1] + '0'));
                    m.push_back((char)(grid[i][j+1] + '0'));
                    m.push_back((char)(grid[i+1][j-1] + '0'));
                    m.push_back((char)(grid[i+1][j] + '0'));
                    m.push_back((char)(grid[i+1][j+1] + '0'));
                    if (mat.find(m) != mat.end())
                        ++count;
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
    public int NumMagicSquaresInside(int[][] grid) {
        if (grid.Length < 3) { return 0; }
        int num = 0;
        for (int i = 0; i < grid.Length-2; ++i) {
            for (int j = 0; j < grid.Length-2; ++j) {
                if (isMagicSquares(grid, i, j, 3))
                    ++num;
            }
        }
        return num;
    }

    bool isMagicSquares(int[][] grid, int i, int j, int n) {
        if (grid.Length < i + n || grid.Length < j + n) 
            return false;    
        HashSet<int> hash = new HashSet<int>();
        int val = -1;
        int d1=0,d2=0;
        for (int k = 0; k < 3; ++k) {

            int row = 0, col = 0;
            for (int l = 0; l < 3; ++l) {
                if (grid[i+k][j+l] < 1 || grid[i+k][j+l] > 9)
                    return false;
                if (hash.Contains(grid[i+k][j+l]))
                    return false;
                hash.Add(grid[i+k][j+l]);
                row += grid[i+k][j+l];
                col += grid[i+l][j+k];

                if (k == l) d1 += grid[i+k][j+l];
                if (l+1+k == n) d2 += grid[i+k][j+l];
            }

            if (val< 0) val = row;
            if (row != val || col != val) return false;

        }

        if (val != d1 || val != d2) return false;
        return true;
    }
}

```

## Java Solution

```java

public class Solution {
    public int NumMagicSquaresInside(int[][] grid) {
        if (grid.Length < 3){
            return 0;
        }
        int sum = 0;
        for (int i = 1;i < grid.Length - 1;i++){
            for (int j = 1;j < grid.Length - 1;){
                if (grid[i][j] == 5 && isLawfulNum(grid,j,i)){
                    sum++;
                    j += 2;
                }else {
                    j++;
                }
            }
        }
        return sum;
    }

    private bool isLawfulNum(int[][] grid,int x,int y){
        int num1 = grid[y - 1][x - 1];
        int num2 = grid[y - 1][x];
        int num3 = grid[y][x - 1];
        int num4 = grid[y - 1][x + 1];
        int num5 = grid[y][x + 1];
        int num6 = grid[y + 1][x - 1];
        int num7 = grid[y + 1][x];
        int num8 = grid[y + 1][x + 1];
        HashSet<int> hash = new HashSet<int>();
        for (int i = -1;i < 2;++i){
            for (int j = -1;j <2;++j){
                if (hash.Contains(grid[i][j]))
                    return false;
                hash.Add(grid[i][j]);
            }
        }

        if (num1 % 5 != 0&&num2 % 5 != 0&&num3 % 5 != 0&&num4 % 5 != 0)
            if (10 - num1 == num8&&10 - num2 == num7&&10 - num3 == num5&&10 - num4 == num6)
                return true;
        return false;
    }

}

```

## Python Solution

```python

class Solution:
    def numMagicSquaresInside(self, grid):
        """
        :type grid: List[List[int]]
        :rtype: int
        """
        count = 0
        for i in range(len(grid) - 2):
            for j in range(len(grid[0]) - 2):
                s = set()
                for m in range(3):
                    for n in range(3):
                        if grid[i + m][j + n] > 9 or grid[i + m][j + n] < 1:
                            break
                        s.add(grid[i + m][j + n])
                if len(s) != 9:
                    continue
                summ = sum(grid[i][j : j + 3])
                if sum(grid[i + 1][j : j + 3]) != summ:
                    continue 
                if sum(grid[i + 2][j : j + 3]) != summ:
                    continue
                if grid[i][j] + grid[i + 1][j] + grid[i + 2][j] != summ:
                    continue
                if grid[i][j + 1] + grid[i + 1][j + 1] + grid[i + 2][j + 1] != summ:
                    continue
                if grid[i][j + 2] + grid[i + 1][j + 2] + grid[i + 2][j + 2] != summ:
                    continue
                if grid[i][j] + grid[i + 1][j + 1] + grid[i + 2][j + 2] != summ:
                    continue
                if grid[i + 2][j] + grid[i + 1][j + 1] + grid[i][j + 2] != summ:
                    continue
                count += 1
        return count

```





