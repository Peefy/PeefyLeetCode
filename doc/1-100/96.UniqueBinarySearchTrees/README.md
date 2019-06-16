
# Problem 96 : UniqueBinarySearchTrees

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/1-100/96.UniqueBinarySearchTrees/problem.png"/>

## C++ Solution

```c++

class Solution {
public:
    int numTrees(int n) {        
        if(n <= 1)
            return 1;
        long res = 1;
        for(int i = 1; i <= n; i++){
            res = res * (4 * i - 2) / (i + 1);
        }
        return (int) res;
    }
};

```

## C# Solution

```csharp

public class Solution {
    public int NumTrees(int n) {
        if(n <= 1)
            return 1;
        long res = 1;
        for(int i = 1; i <= n; i++){
            res = res * (4 * i - 2) / (i + 1);
        }
        return (int) res;
    }
}


```

## Java Solution

```java

class Solution {
    public int numTrees(int n) {
        int[] dp = new int[n + 1];
        dp[0] = 1;
        dp[1] = 1;
        for(int i = 2; i < n + 1; i++)
            for(int j = 1; j < i + 1; j++) 
                dp[i] += dp[j - 1] * dp[i - j];
        return dp[n];
    }
}

```

## Python Solution

```python

class Solution:
    def numTrees(self, n: int) -> int:
        dp = [0] * (n + 1)
        dp[0] = 1
        dp[1] = 1
        for i in range(2, n + 1):
            for j in range(1, i + 1):
                dp[i] += dp[j - 1] * dp[i - j]
        return dp[n]

```


