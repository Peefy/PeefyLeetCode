
# problem 832 : FlipAndInvertImage

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/801-900/832.FlipAndInvertImage/problem.png"/>

## C++ Solution

```c++

static int x = []() {
    ios::sync_with_stdio(false); 
    cin.tie(NULL);              
    return 0;
}();

class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {   
        for(int i = 0; i < A.size(); i++){
            reverse(A[i].begin(), A[i].end());
            for (int j = 0; j < A[0].size(); j++){
                A[i][j] = 1 - A[i][j];
            }
        }
        return A;
    }
};

```

## C# Solution

```csharp

public class Solution {
    public int[][] FlipAndInvertImage(int[][] A) {
        for(int i = 0; i < A.GetLength(0); i++){
            Array.Reverse(A[i]);
            for (int j = 0; j < A[0].Length; j++){
                A[i][j] = 1 - A[i][j];
            }
        }
        return A;
    }
}

```

## Java Solution

```java

class Solution {
    public int[][] flipAndInvertImage(int[][] A) {
        for(int i = 0; i < A.length; i++){
            int size = A[0].length;
            for (int k = 0, mid=size>>1, j=size-1; k<mid; k++, j--){
                int temp = A[i][k];
                A[i][k] = A[i][j];
                A[i][j] = temp; 
            }
            for (int j = 0; j < size; j++){
                A[i][j] = 1 - A[i][j];
            }
        }
        return A;
    }
}

```

## Python Solution

```python

class Solution:
    def flipAndInvertImage(self, A):
        """
        :type A: List[List[int]]
        :rtype: List[List[int]]
        """
        m = len(A)
        n = len(A[0])          
        for i in range(m):
            A[i] = A[i][::-1]
            for j in range(n):
                A[i][j] = 1 - A[i][j]
        return A

```





