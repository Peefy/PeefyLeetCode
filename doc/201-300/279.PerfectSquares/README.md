
# problem 279 : PerfectSquares

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/201-300/279.PerfectSquares/problem.png"/>

* 第一种：广度优先搜索BFS
* 第二种：动态规划
* 第三种：数学方法：拉格朗日四方形定理

## C++ Solution

```c++

class Solution {
public:
    int numSquares(int n) {
        if (n == 0)
            return 0;
        queue<pair<int, int>> v;
        v.push(make_pair(n, 0));
        vector<bool> sp(n + 1, false);
        sp[n] = true;
        while (v.size()) {
            int size = v.size();
            while (size--) {
                auto pt = v.front();
                v.pop();
                int d = pt.first;
                sp[d] = true;
                for (int i = 1; d - i * i >= 0; ++i) {
                    int a = d - i * i;
                    if (a == 0) {
                        int k = pt.second;
                        k++;
                        return k;
                    }
                    if (sp[a] == false) 
                        v.push(make_pair(a, pt.second + 1));
                }
            }
        }
        return 0;
    }
};
```

## C# Solution

```csharp

public class Solution {
    public int NumSquares(int n) {
        int[] dp = new int[n + 1]; 
        for (int i = 1; i <= n; i++) {
            dp[i] = i; 
            for (int j = 1; i - j * j >= 0; j++) { 
                dp[i] = Math.Min(dp[i], dp[i - j * j] + 1); 
            }
        }
        return dp[n];
    }
}

```

## Java Solution

```java

public class Solution {
    public int numSquares(int n) {
        int[] dp = new int[n + 1]; // 默认初始化值都为0
        for (int i = 1; i <= n; i++) {
            dp[i] = i; // 最坏的情况就是每次+1
            for (int j = 1; i - j * j >= 0; j++) { 
                dp[i] = Math.min(dp[i], dp[i - j * j] + 1); // 动态转移方程
            }
        }
        return dp[n];
    }
}

```

## Python Solution

```python

class Solution:
    def numSquares(self, n: int) -> int:
        # 任何一个正整数都可以表示成不超过四个整数的平方之和。推论：满足四数平方和定理的数n 
        while n % 4 == 0:
            n /= 4
        if n % 8 == 7:
            return 4
        a = 0
        while a ** 2 <= n:
            b = int((n - a ** 2) ** 0.5)
            if a ** 2 + b ** 2 == n:
                return bool(a) + bool(b)
            a += 1
        return 3     

```




