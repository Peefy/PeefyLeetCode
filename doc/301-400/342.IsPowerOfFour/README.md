
# problem 342 : IsPowerOfFour

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/301-400/342.IsPowerOfFour/problem.png"/>

## C++ Solution

```c++

class Solution {
public:
    bool isPowerOfFour(int num) {
        return num > 0 && 1073741824 % num == 0 && \
            (num - 1) % 3 == 0;
    }
};

```

## C# Solution

```csharp
public class Solution {
    public bool IsPowerOfFour(int num) {
        if (num == 1) 
            return true;
        if (num <= 0)
            return false;
        if ((num & (num-1)) == 0 && (num & 0xAAAAAAAA) == 0)
            return true;
        else
            return false;
    }
}

```

## Java Solution

```java

class Solution {
    public boolean isPowerOfFour(int n) {
        if (num <= 0) 
            return false;
        int ans = Math.log10(n) / Math.log10(4);
        return ans % 1 == 0;
    }
}

```

## Python Solution

```python

class Solution:
    def isPowerOfFour(self, n):
        """
        :type n: int
        :rtype: bool
        """
        return n == 1 or n == 4 or n == 16 or n == 64 \
         or n == 256 or n == 1024 or n == 4096 or n == 16384 \
         or n == 65536 or n == 262144 or n == 1048576 \
         or n == 4194304 or n == 16777216 or n == 67108864 \
         or n == 268435456 or n == 1073741824

```




