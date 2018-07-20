
# problem 231 : IsPowerOfTwo

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/201-300/231.IsPowerOfTwo/problem.png"/>

## C++ Solution

```c++

class Solution {
public:
    bool isPowerOfTwo(int n) {        
        if (n <= 0) {
            return false;
        }
        int64_t s = 2147483648;
        if (s % n == 0)
        {
            return true;
        }
        return false;
    }
};

```

## C# Solution

```csharp

public class Solution {
    public bool IsPowerOfTwo(int n) {
        if (n <= 0)
        {
            return false;
        }
        return (n & (n - 1)) == 0;
    }
}

```

## Java Solution

```java

class Solution {
    public boolean isPowerOfTwo(int n) {
        if (n <= 0) {
            return false;
        }
        switch (n) {
            case 1 << 0:
            case 1 << 1:
            case 1 << 2:
            case 1 << 3:
            case 1 << 4:
            case 1 << 5:
            case 1 << 6:
            case 1 << 7:
            case 1 << 8:
            case 1 << 9:
            case 1 << 10:
            case 1 << 11:
            case 1 << 12:
            case 1 << 13:
            case 1 << 14:
            case 1 << 15:
            case 1 << 16:
            case 1 << 17:
            case 1 << 18:
            case 1 << 19:
            case 1 << 20:
            case 1 << 21:
            case 1 << 22:
            case 1 << 23:
            case 1 << 24:
            case 1 << 25:
            case 1 << 26:
            case 1 << 27:
            case 1 << 28:
            case 1 << 29:
            case 1 << 30:
            case 1 << 31:
                return true;      
            default:
                break;
        }
        return false;
    }
}

```

## Python Solution

```python

class Solution:
    def isPowerOfTwo(self, n):
        """
        :type n: int
        :rtype: bool
        """
        binstr = bin(n)
        return binstr.count('1') == 1 and binstr.count('-') == 0

```




