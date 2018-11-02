
# problem 507 : PerfectNumber

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/501-600/507.PerfectNumber/problem.png"/>

## C++ Solution

```c++

class Solution {
public:
    bool checkPerfectNumber(int num) {
        if (num <= 1) {
            return false;
        }
        int up = (int)sqrt(num) + 1;
        int sum = 1;
        for (int i = 2; i < up; i++) {
            if (num % i == 0) {
                sum += i;
                if (num / i != i) {
                    sum += num / i;
                }
            }
        }
        return sum == num;
    }
};

```

## C# Solution

```csharp

public class Solution {
    public bool CheckPerfectNumber(int num) {
        if (num <= 1) {
            return false;
        }
        int up = (int)Math.Sqrt(num) + 1;
        int sum = 1;
        for (int i = 2; i < up; i++) {
            if (num % i == 0) {
                sum += i;
                if (num / i != i) {
                    sum += num / i;
                }
            }
        }
        return sum == num;
    }
}

```

## Java Solution

```java


class Solution {
    public boolean checkPerfectNumber(int num) {
        if (num <= 1) {
            return false;
        }
        int up = (int)Math.sqrt(num) + 1;
        int sum = 1;
        for (int i = 2; i < up; i++) {
            if (num % i == 0) {
                sum += i;
                if (num / i != i) {
                    sum += num / i;
                }
            }
        }
        return sum == num;
    }
}

```

## Python Solution

```python

class Solution:
    def checkPerfectNumber(self, num):
        """
        :type num: int
        :rtype: bool
        """
        return num in [6,28,496,8128,33550336,8589869056,137438691328]

```





