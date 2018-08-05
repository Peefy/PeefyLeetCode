
# problem 258 : NumberAddDigits

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/201-300/258.NumberAddDigits/problem.png"/>

## C++ Solution

```c++

class Solution {
public:
    int addDigits(int num) {
        int r = 0;      
        while (num > 0) {
            r += num % 10;
            num /= 10;
        }
        if (r >= 10)
            return addDigits(r);
        return r;
    }
};

```

## C# Solution

```csharp

public class Solution {
    public int AddDigits(int num) {
        if (num == 0)
            return 0;
        return 1 + (num - 1) % 9;
    }
}

```

## Java Solution

```java

class Solution {
    public int addDigits(int num) {
        if (num == 0)
            return 0;
        return 1 + (num - 1) % 9;
    }
}

```

## Python Solution

```python

class Solution:
    def addDigits(self, num):
        """
        :type num: int
        :rtype: int
        """
        return 1 + (num - 1) % 9

```




