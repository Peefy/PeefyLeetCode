
# problem 566 : Matrix Reshape

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/501-600/566.MatrixReshape/problem.png"/>

## C++ Solution

```c++

static int pr = []() { 
    std::ios::sync_with_stdio(false); 
    cin.tie(NULL);  
    return 0; 
}();

class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
        int m = nums.size();
        int n = nums[0].size();
        if (r * c != n * m)
            return nums;
        vector<vector<int>> mat(r, vector<int>(c));
		int hang = 0;
		int lie = 0;
		for(int a = 0; a < m; a++)          
			for(int b = 0; b < n; b++)
			{
				mat[hang][lie] = nums[a][b];
                lie++;
				if (lie == c)
				{
					hang++;
                    lie = 0;
				}
			}
		return mat;
    }
};

```

## C# Solution

```csharp

public class Solution {
    public int[,] MatrixReshape(int[,] nums, int r, int c) {
        int m = nums.GetLength(0);
        int n = nums.GetLength(1);
        if (r * c != n * m)
            return nums;
        var mat = new int[r, c];
		int hang = 0;
		int lie = 0;
		for(int a = 0; a < m; a++)          
			for(int b = 0; b < n; b++)
			{
				mat[hang, lie] = nums[a, b];
                lie++;
				if (lie == c)
				{
					hang++;
                    lie = 0;
				}
			}
		return mat;
    }
}

```

## Java Solution

```java

class Solution {
    public int[][] matrixReshape(int[][] nums, int r, int c) {
        int m = nums.length;
        int n = nums[0].length;
        if (m * n != r * c)
            return nums;
        int[][] mat = new int[r][c];
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; ++j){
                int index = i * c + j;
                mat[i][j] = nums[index / n][index % n];
            }
        }
        return mat;
    }
}

```

## Python Solution

```python

class Solution:
    def matrixReshape(self, nums, r, c):
        """
        :type nums: List[List[int]]
        :type r: int
        :type c: int
        :rtype: List[List[int]]
        """
        m = len(nums)
        n = len(nums[-1])
        if m * n != r * c:
            return nums
        mat = []
        for i in range(r):
            mat.append([])
            for j in range(c):
                index = i * c + j
                row = index // n
                column = index - row * n
                mat[i].append(nums[row][column])
        return mat

```





