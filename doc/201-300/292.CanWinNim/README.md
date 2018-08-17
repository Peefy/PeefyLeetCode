
# problem 292 : CanWinNim

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/201-300/292.CanWinNim/problem.png"/>

## C++ Solution

```c++

class Solution {
public:
    bool canWinNim(int n) {
        return n % 4 == 0
    }
};

```

## C# Solution

```csharp

public class Solution {
    public bool CanWinNim(int n) {
        return n % 4 == 0;
    }
}

```

## Java Solution

```java

class Solution {
    public boolean canWinNim(int n) {
        return n % 4 == 0; 
    }
}

```

## Python Solution

```python

class Solution:
    def canWinNim(self, n):
        """
        :type n: int
        :rtype: bool
        """
        return n % 4 != 0

```




