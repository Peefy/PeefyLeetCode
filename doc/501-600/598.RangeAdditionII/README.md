
# problem 598 : RangeAdditionII

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/501-600/598.RangeAdditionII/problem.png"/>

## C++ Solution

```c++

static int pr = []() {
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    int maxCount(int m, int n, vector<vector<int>>& ops) {
        if (ops.size() == 0)
            return m * n;
        int minm = ops[0][0];
        int minn = ops[0][1];
        for (auto each : ops) {
            minm = min(minm, each[0]);
            minn = min(minn, each[1]);
        }
        return minm * minn;
    }
};

```

## C# Solution

```csharp

public class Solution
{
    public int MaxCount(int m, int n, int[,] ops)
    {
        int minA = m, minB = n;
        for (int i = 0; i < ops.GetLength(0); i++)
        {
            if (minA > ops[i, 0])
                minA = ops[i, 0];
            if (minB > ops[i, 1])
                minB = ops[i, 1];
        }
        return minA * minB;
    }
}

```

## Java Solution

```java

class Solution {
    public int maxCount(int m, int n, int[][] ops) {
        if (ops.length == 0)
            return m * n;
        int minm = ops[0][0];
        int minn = ops[0][1];
        for (int[] each : ops) {
            minm = Math.min(minm, each[0]);
            minn = Math.min(minn, each[1]);
        }
        return minm * minn;
    }
}

```

## Python Solution

```python

class Solution:
    def maxCount(self, m, n, ops):
        """
        :type m: int
        :type n: int
        :type ops: List[List[int]]
        :rtype: int
        """
        if len(ops) == 0:
            return m * n
        rows = [l[0] for l in ops]
        cols = [l[1] for l in ops]
        return min(min(rows), m) * min(min(cols), n)

```





