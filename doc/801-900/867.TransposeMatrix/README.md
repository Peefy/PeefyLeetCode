
# problem 867 : TransposeMatrix

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/801-900/867.TransposeMatrix/problem.png"/>

## C++ Solution

```c++

static int x = []() {
    ios::sync_with_stdio(false); 
    cin.tie(NULL);              
    return 0;
}();

class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& A) {
        vector<vector<int>> result(A[0].size(), vector<int>(A.size()));
        for (int j = 0; j < A[0].size(); j++) {
            for (int i = 0; i < A.size(); i++) {
                result[j][i] = A[i][j];
            }
        }
        return result;
    }
};

```

## C# Solution

```csharp

public class Solution {
    public int[][] Transpose(int[][] A) {
        int[][] result = new int[A[0].Length][];
        for (int j = 0; j < A[0].Length; j++) {
            result[j] = new int[A.Length];
            for (int i = 0; i < A.Length; i++) {
                result[j][i] = A[i][j];
            }
        }
        return result;
    }
}

```

## Java Solution

```java

class Solution {
    public int[][] transpose(int[][] A) {
        int[][] result = new int[A[0].length][A.length];
        for (int j = 0; j < A[0].length; j++) {
            for (int i = 0; i < A.length; i++) {
                result[j][i] = A[i][j];
            }
        }
        return result;
    }
}

```

## Python Solution

```python

class Solution:
    def transpose(self, A):
        """
        :type A: List[List[int]]
        :rtype: List[List[int]]
        """
        A[:] = map(list,zip(*A))
        return A

```





