
# problem 367 : ValidPerfectSquare

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/301-400/367.ValidPerfectSquare/problem.png"/>

* 方法一：二分查找法
* 方法二：采用平方根的牛顿迭代法

** 注意python与c,c++,java,c#的不同之一是python的int默认64位

## C++ Solution

```c++

class Solution {
    public boolean isPerfectSquare(int num) {
        if (num > 2147395600)
        return false;
        if (num == 2147395600)
            return true;
        float x = 1;
        while (Math.abs(x * x - num) > 0.0001)
            x = x - (x * x - num) / (2 * x);
        return Math.abs((int)(x) - x) < 0.0001;
    }
}

```

## C# Solution

```csharp

public class Solution {
    public bool IsPerfectSquare(int num) {
        long x = num;
        while(x * x > num)
        {
            x = (x + num / x) / 2;
        }
        return (int)(x * x) == num;
    }
}

```

## Java Solution

```java

class Solution {
    public boolean isPerfectSquare(int num) {
        if (num > 2147395600)
        return false;
        if (num == 2147395600)
            return true;
        float x = 1;
        while (Math.abs(x * x - num) > 0.0001)
            x = x - (x * x - num) / (2 * x);
        return Math.abs((int)(x) - x) < 0.0001;
    }
}

```

## Python Solution

```python

class Solution:
    def isPerfectSquare(self, num):
        """
        :type num: int
        :rtype: bool
        """
        left = 1
        right = num // 2 + 1    
        while left <= right:
            middle = (left + right) // 2
            r = middle * middle
            if r == num:
                return True
            elif r <= num:
                left = middle + 1
            else:
                right = middle - 1
        return False

```
