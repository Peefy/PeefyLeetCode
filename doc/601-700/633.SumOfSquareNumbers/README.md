
# problem 633 : SumOfSquareNumbers

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/601-700/633.SumOfSquareNumbers/problem.png"/>

python解决方案使用了双指针，其他解决方案使用了数学方法

## C++ Solution

```c++

static int x = []() {
    ios::sync_with_stdio(false); 
    cin.tie(NULL);              
    return 0;
}();

class Solution {
public:
    bool judgeSquareSum(int c) {
        int i = 2;
        while (i * i <= c){
            int count = 0;
            if (c % i ==0)
                while (c%i ==0){
                    count += 1;
                    c /= i;
                }
                if (i % 4 == 3 && count % 2 != 0)
                    return false;
            i += 1;
        }
        return c % 4 != 3;
    }
};

```

## C# Solution

```csharp

public class Solution {
    public bool JudgeSquareSum(int c) {
        int i = 2;
        while (i * i <= c){
            int count = 0;
            if (c % i ==0)
                while (c%i ==0){
                    count += 1;
                    c /= i;
                }
                if (i % 4 == 3 && count % 2 != 0)
                    return false;
            i += 1;
        }
        return c % 4 != 3;
    }
}

```

## Java Solution

```java

class Solution {
    public boolean judgeSquareSum(int c) {
        int i = 2;
        while (i * i <= c){
            int count = 0;
            if (c % i ==0)
                while (c%i ==0){
                    count += 1;
                    c /= i;
                }
                if (i % 4 == 3 && count % 2 != 0)
                    return false;
            i += 1;
        }
        return c % 4 != 3;
    }
}

```

## Python Solution

```python

class Solution:
    def judgeSquareSum(self, c):
        """
        :type c: int
        :rtype: bool
        """
        right = int(c ** 0.5)
        left = 0
        while left <= right:
            s = left * left + right * right
            if s == c:
                return True
            elif s < c:
                left += 1
            elif s > c:
                right -= 1
        return False

```





