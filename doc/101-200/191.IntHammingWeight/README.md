
# problem 191 : IntHammingWeight

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/101-200/191.IntHammingWeight/problem.png"/>

完美解析见C++

## C++ Solution

```c++

class Solution {
public:
    int hammingWeight(uint32_t n) {
        int one_nums = 0;
        while(n)
        {
            one_nums++;
            n = (n-1) & n;
        }
        return one_nums;
    }
};

```

## C# Solution

```csharp

public class Solution {
    public int HammingWeight(uint n) {
        int count = 0;
        while (n > 0) {
            if ((n & 1) == 1)
                ++count;
            n >>= 1;
        }
        return count;
    }
}

```

## Java Solution

```java

public class Solution {
    public int hammingWeight(int n) {
        int count = 0;
        for (int i = 0; i < 32; i++) {
            if ((n & 1) == 1)
                ++count;
            n >>= 1;
        }
        return count;
    }
}

```

## Python Solution

```python

class Solution(object):
    def hammingWeight(self, n):
        """
        :type n: int
        :rtype: int
        """
        return bin(n).count('1')

```



