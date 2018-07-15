
# problem 172 : TrailingZeroes

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/101-200/172.TrailingZeroes/problem.png"/>

## C++ Solution

```c++
class Solution {
public:
    int trailingZeroes(int n) {
        if (n < 5)
            return 0;
        else
            return n / 5 + trailingZeroes(n / 5);
    }
};

```

## C# Solution

```csharp

    public class Solution
    {
        public int TrailingZeroes(int n)
        {
            int sum = 0;
            while (n > 0)
            {
                sum += n / 5;
                n /= 5;
            }
            return sum;
        }
    }

```

## Java Solution

```java

class Solution {
    public int trailingZeroes(int n) {
        int sum = 0;
        for (long i = 5; i <= n; i *= 5) {
            sum += n / i;
        }
        return sum;
    }
}

```

## Python Solution

```python

class Solution:
    def trailingZeroes(self, n):
        """
        :type n: int
        :rtype: int
        """
        count = 0
        while True:
            n = n // 5
            if n == 0:
                break
            else:
                count += n
        return count

```


