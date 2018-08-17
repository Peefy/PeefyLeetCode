
# problem 326 : IsPowerOfThree

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/301-400/326.IsPowerOfThree/problem.png"/>

## C++ Solution

```c++

class Solution {
public:
    bool isPowerOfThree(int n) {
        if (n == 1) return true;
        if (n%3 != 0) return false;
        int i = 3;
        while (i < n) i *= 3;
        return i == n;
    }
}

```

## C# Solution

```csharp

public class Solution {
    public bool IsPowerOfThree(int n) {
        if (n < 1)
            return false;
        while (n % 3 == 0){ 
            n /= 3;
        }
        return n == 1;
    }
}

```

## Java Solution

```java

class Solution {
    public boolean isPowerOfThree(int n) {
        return n > 0 && 1162261467 % n == 0;
    }
}

```

## Python Solution

```python

class Solution:
    def isPowerOfThree(self, n):
        """
        :type n: int
        :rtype: bool
        """
        return n > 0 and 1162261467 % n == 0

```




