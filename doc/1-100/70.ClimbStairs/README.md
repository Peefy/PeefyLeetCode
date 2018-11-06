
# problem 70 : ClimbStairs

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/1-100/70.ClimbStairs/problem.png"/>

1，2步爬楼梯是斐波那契数列的变形

## C++ Solution

```c++
class Solution
{

  public:
    int climbStairs(int n)
    {
        if (n <= 2)
            return n;
        int a = 1, b = 2, i = 3;
        while (i <= n)
        {
            int sum = a + b;
            a = b;
            b = sum;
            ++i;
        }
        return b;
    }
};

```

## C# Solution

```csharp
    public class Solution
    {
        public int ClimbStairs(int n)
        {
            if (n <= 2)
                return n;
            int a = 1, b = 2, i = 3;
            while (i <= n)
            {
                int sum = a + b;
                a = b;
                b = sum;
                ++i;
            }
            return b;
        }
    }

```

## Java Solution

```java
class Solution {
    public int climbStairs(int n) {
        if (n <= 2)
            return n;
        int a = 1, b = 2, i = 3;
        while (i <= n) {
            int sum = a + b;
            a = b;
            b = sum;
            ++i;
        }
        return b;
    }
}

```

## Python Solution

```python

class Solution:
    def climbStairs(self, n):
        """
        :type n: int
        :rtype: int
        """
        if n == 1:
            return 1
        if n == 2:
            return 2
        a, b, i = 1, 2, 3
        while i <= n:
            a, b = b, a + b
            i += 1
        return b

```


