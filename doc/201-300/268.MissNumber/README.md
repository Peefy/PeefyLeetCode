
# problem 263 : IsUglyNumber

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/201-300/263.IsUglyNumber/problem.png"/>

## C++ Solution

```c++

class Solution {
public:
    bool isUgly(int num) {
        if (num <= 0) 
            return false;
        while (num % 2 == 0) 
            num /= 2;
        while (num % 3 == 0) 
            num /= 3;
        while (num % 5 == 0) 
            num /= 5;
        return num == 1;
    }
};

```

## C# Solution

```csharp

public class Solution {
    public bool IsUgly(int num) {
        if (num <= 0) 
            return false;
        while (num % 2 == 0) 
            num /= 2;
        while (num % 3 == 0) 
            num /= 3;
        while (num % 5 == 0) 
            num /= 5;
        return num == 1;
    }
}

```

## Java Solution

```java

class Solution {
    public boolean isUgly(int num) {
        if (num <= 0) 
            return false;
        while (num % 2 == 0) 
            num /= 2;
        while (num % 3 == 0) 
            num /= 3;
        while (num % 5 == 0) 
            num /= 5;
        return num == 1;
    }
}

```

## Python Solution

```python

class Solution:
    def isUgly(self, num):
        """
        :type num: int
        :rtype: bool
        """
        if num <= 0:
            return False
        while num % 2 == 0:
            num = num // 2
        while num % 3 == 0:
            num = num // 3
        while num % 5 == 0:
            num = num // 5
        if num == 1:
            return True
        return False

```




