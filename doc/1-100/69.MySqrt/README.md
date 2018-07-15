
# problem 69 : MySqrt

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/1-100/69.MySqrt/problem.png"/>

如果是求浮点结果，则进行牛顿迭代法 求解方程x^2-a=0的根，见c++代码和java代码，迭代公式x=(x+a/x)*0.5,初值选择1

如果是求整数结果，则进行二分查找，见python代码

还可以使用滑稽方法，见C#代码

还可以使用带有魔术数快速平方根算法，当然精度不高,时间复杂度为O(1),代码如下

```c
float mySqrt(float x)
{
float a = x;
unsigned int i = *(unsigned int *)&x;
i = (i + 0x3f76cf62) >> 1;
x = *(float *)&i;
x = (x + a / x) * 0.5;
return x;
}
```

## C++ Solution

```c++

class Solution
{
  public:
   double Sqrt(double a, double p) 
    {
        double x = 1.0;
        double cheak;
        do
        {
            x = (a / x + x) / 2.0;
            cheak = x * x - a;
        } while ((cheak >= 0 ? cheak : -cheak) > p);
        return x;
    }

    int mySqrt(int x)
    {
        return Sqrt(x, 0.01);
    }
};

```

## C# Solution

```csharp

public class Solution
{
    public int MySqrt(int x)
    {
        return (int)System.Math.Sqrt(x);
    }
}

```

## Java Solution

```java

class Solution {
    public int mySqrt(int x) {
        if (x == 0)
            return 0;
        if (x == 1)
            return 1;
        int left = 1;
        int right = x / 2;
        while (left < right) {
            int middle = left + ((right - left + 1) >> 1);
            if (middle == x / middle)
                return middle;
            else if (middle < x / middle)
                left = middle;
            else
                right = middle - 1;
        }
        return left;
    }
}

```

## Python Solution

```python

class Solution(object):
    def mySqrt(self, x):
        """
        :type x: int
        :rtype: int
        """
        if x == 0:
            return 0
        if x == 1:
            return 1
        l = 1
        r = x // 2
        # 二分查找
        while l < r:
            mid = l + (( r - l + 1) >> 1)
            if mid * mid == x: 
                return mid
            elif mid * mid < x:
                l = mid
            else:
                r = mid - 1
        return l

```


