
# problem 441 : ArrangingCoins

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/401-500/441.ArrangingCoins/problem.png"/>

## C++ Solution

```c++

class Solution {
public:
    int arrangeCoins(int n) {
        return (int)(sqrt(1 + 8 * (long long)n) / 2.0 - 0.5);
    }
};


```

## C# Solution

```csharp

public class Solution {
    public int ArrangeCoins(int n) {
            int left=0;
            int hight=n;
            while(left<hight) {
                if ((left * (left -1) / 2) == n) {
                    return left;
                }
                long  mid = left + (hight-left) / 2;
                if ((mid * (mid +1) / 2) == n) {
                    return (int)mid;
                }
                if ((mid * (mid+ 1) / 2) > n) {
                    hight=(int)(mid-1);
                }
                if ((mid * (mid +1) / 2) <n) {
                    left=(int)(mid+1);
                }
            }
            if((long)((long)left * ((long)left + 1) / 2) > (long)n){
                left--;
            }
            return left;
    }
}

```

## Java Solution

```java

class Solution {
    public int arrangeCoins(int n) {
        return (int)(-1 + Math.sqrt(1 + 8 * (double)n) / 2.0 + 0.5);
    }
}

```

## Python Solution

```python

class Solution:
    def arrangeCoins(self, n):
        """
        :type n: int
        :rtype: int
        """
        return int(-1 + (1 + 8 * n) ** 0.5 / 2 + 0.5)

```





