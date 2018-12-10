
# problem 754 : ReachNumber

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/701-800/754.ReachNumber/problem.png"/>

## C++ Solution

```c++

static int pr = []() {
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    int reachNumber(int target) {
        int t = abs(target);
        int x = (int)sqrt(t * 2);
        if (t > x * (x + 1) / 2)
            x += 1;
        int m = x * (x + 1) / 2 - t;      
        if (m % 2 == 1){
            return x % 2 == 1 ? x + 2 : x + 1;
        }    
        return x;
    }
};

```

## C# Solution

```csharp

public class Solution {
    public int ReachNumber(int target) {
        target = Math.Abs(target);
        int n = (int)Math.Ceiling((-1.0 + Math.Sqrt(1 + 8.0 * target)) / 2);
        if ((n * (n + 1) / 2) == target)
            return n;
        int d = (n * (n + 1) / 2) - target;
        if ((d & 1) == 0)
            return n;
        return (n & 1) > 0 ? n + 2 : n + 1;
    }
}

```

## Java Solution

```java

class Solution {
    public int reachNumber(int target) {
        target = Math.abs(target);
        int n = (int)Math.ceil((-1.0 + Math.sqrt(1 + 8.0 * target)) / 2);
        if ((n * (n + 1) / 2) == target)
            return n;
        int d = (n * (n + 1) / 2) - target;
        if ((d & 1) == 0)
            return n;
        return (n & 1) > 0 ? n + 2 : n + 1;
    }
}

```

## Python Solution

```python

class Solution:
    def reachNumber(self, target):
        """
        :type target: int
        :rtype: int
        """
        target = abs(target)
        m = int((-1 + (1 + 8 * target) ** 0.5) // 2)
        while True:
            total = (m * m + m) // 2 - target
            if total == 0:
                return m
            elif total < 0:
                m += 1
            elif total % 2 == 0:
                return m
            else:
                m += 1     
        return m

```





