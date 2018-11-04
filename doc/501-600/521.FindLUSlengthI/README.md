
# problem 521 : FindLUSlengthI

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/501-600/521.FindLUSlengthI/problem.png"/>

## C++ Solution

```c++

class Solution {
public:
    int findLUSlength(string a, string b) {
        return a == b ? -1 : max(a.length(), b.length());
    }
};

```

## C# Solution

```csharp

public class Solution {
    public int FindLUSlength(string a, string b) {
        return a == b ? -1 : Math.Max(a.Length, b.Length);
    }
}

```

## Java Solution

```java

class Solution {
    public int findLUSlength(String a, String b) {
        return a == b ? -1 : Math.max(a.length(), b.length());
    }
}


```

## Python Solution

```python

class Solution:
    def findLUSlength(self, a, b):
        """
        :type a: str
        :type b: str
        :rtype: int
        """
        return -1 if a == b else max(len(a), len(b))

```





