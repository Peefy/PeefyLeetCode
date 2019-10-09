
# problem 264 : UglyNumberII

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/201-300/264.UglyNumberII/problem.png"/>

## C++ Solution

```c++

class Solution {
public:
    int nthUglyNumber(int n) {
        vector<int> dp(n, 0);
        dp[0] = 1;
        int p2 = 0, p3 = 0, p5 = 0;
        for (int i = 1; i < n; i++) {
            dp[i] = min(dp[p2] * 2, dp[p3] * 3);
            dp[i] = min(dp[i], dp[p5] * 5);
            if (dp[i] >= dp[p2] * 2)
                p2 += 1;
            if (dp[i] >= dp[p3] * 3)
                p3 += 1;
            if (dp[i] >= dp[p5] * 5)
                p5 += 1;
        }
        return dp[n - 1];
    }
};


```

## C# Solution

```csharp

    public class Solution
    {
        public int NthUglyNumber(int n)
        {
            int[] dp = new int[n];
            dp[0] = 1;
            int p2 = 0, p3 = 0, p5 = 0;
            for (int i = 1; i < n; i++)
            {
                dp[i] = Math.Min(dp[p2] * 2, dp[p3] * 3);
                dp[i] = Math.Min(dp[i], dp[p5] * 5);
                if (dp[i] >= dp[p2] * 2)
                    p2 += 1;
                if (dp[i] >= dp[p3] * 3)
                    p3 += 1;
                if (dp[i] >= dp[p5] * 5)
                    p5 += 1;
            }
            return dp[n - 1];
        }
    }

```

## Java Solution

```java

class Solution {
    public int nthUglyNumber(int n) {
        int[] dp = new int[n];
        dp[0] = 1;
        int p2 = 0, p3 = 0, p5 = 0;
        for (int i = 1; i < n; i++) {
            dp[i] = Math.min(dp[p2] * 2, dp[p3] * 3);
            dp[i] = Math.min(dp[i], dp[p5] * 5);
            if (dp[i] >= dp[p2] * 2)
                p2 += 1;
            if (dp[i] >= dp[p3] * 3)
                p3 += 1;
            if (dp[i] >= dp[p5] * 5)
                p5 += 1;
        }
        return dp[n - 1];
    }
}

```

## Python Solution

```python

class Solution:
    def nthUglyNumber(self, n):
        dp = [0] * n
        dp[0] = 1
        p2 = 0
        p3 = 0
        p5 = 0
        for i in range(1, n):
            dp[i] = min(2 * dp[p2], 3 * dp[p3], 5 * dp[p5])
            if dp[i] >= 2 * dp[p2]:
                p2 += 1
            if dp[i] >= 3 * dp[p3]:
                p3 += 1
            if dp[i] >= 5 * dp[p5]:
                p5 += 1
        return dp[-1]     

```




