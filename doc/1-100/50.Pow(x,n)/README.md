
# Problem 50 : Pow(x,n)

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/1-100/50.Pow(x,n)/problem.png"/>

二分法，递归方法或者循环都可以

## C++ Solution

```c++

static int x = []() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    double myPow(double x, int n) {
        return pow(x, n);
    }
};

```

## C# Solution

```csharp

public class Solution {
    public double MyPow(double x, int n) {
        if (n == 1) {
            return x;
        }
        if (n == 0) {
            return 1;
        }
        int t = n / 2;
        if (n < 0) {
            x = 1 / x;
            t = -t;
        }
        double res = MyPow(x, t);
        if (n % 2 == 0)
            return res * res;
        return res * res * x;
    }
}

```

## Java Solution

```java

class Solution {
    public double myPow(double x, int n) {
        if (n == 1) {
            return x;
        }
        if (n == 0) {
            return 1;
        }
        int t = n / 2;
        if (n < 0) {
            x = 1 / x;
            t = -t;
        }
        double res = myPow(x, t);
        if (n % 2 == 0)
            return res * res;
        return res * res * x;
    }
}

```

## Python Solution

```python

class Solution:
    def myPow(self, x: float, n: int) -> float:
        return x ** n

```


