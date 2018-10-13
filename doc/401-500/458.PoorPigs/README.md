
# problem 458 : PoorPigs

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/401-500/458.PoorPigs/problem.png"/>

## C++ Solution

```c++

class Solution {
public:
    int poorPigs(int buckets, int minutesToDie, int minutesToTest) {
        if (buckets == 1)
            return 0;
        int base = minutesToTest / minutesToDie + 1;
        int r = 1;
        for (int i = 1;i < 100000;i++)
        {
            r *= base;
            if (r >= buckets)
                return i;
        }
        return 0;
    }
};

```

## C# Solution

```csharp

public class Solution {
    public int PoorPigs(int buckets, int minutesToDie, int minutesToTest) {
        if (buckets == 1)
            return 0;
        int s = minutesToTest / minutesToDie + 1;
        int r = 1;
        for (int i = 1;i < 100000;i++)
        {
            r *= s;
            if (r >= buckets)
                return i;
        }
        return 0;
    }
}

```

## Java Solution

```java

class Solution {
    public int poorPigs(int buckets, int minutesToDie, int minutesToTest) {
        if (buckets == 1)
            return 0;
        int base = minutesToTest / minutesToDie + 1;
        int r = 1;
        for (int i = 1;i < 100000;i++)
        {
            r *= base;
            if (r >= buckets)
                return i;
        }
        return 0;
    }
}

```

## Python Solution

```python

class Solution(object):
    def poorPigs(self, buckets, minutesToDie, minutesToTest):
        """
        :type buckets: int
        :type minutesToDie: int
        :type minutesToTest: int
        :rtype: int
        """
        if buckets == 1:
            return 0      
        single = minutesToTest // minutesToDie + 1
        r = 1
        i = 1
        while True:
            r *= single
            if r >= buckets:
                return i
            i += 1

```





