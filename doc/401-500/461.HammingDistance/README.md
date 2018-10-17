
# problem 461 : HammingDistance

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/401-500/461.HammingDistance/problem.png"/>

## C++ Solution

```c++

class Solution {
public:
    int hammingDistance(int x, int y) {
        int z = x ^ y;
        int count = 0;
        while(z != 0){
            int bit = z & 0x01;
            z >>= 1;
            count += bit == 1 ? 1 : 0;
        }
        return count;
    }
};

```

## C# Solution

```csharp

public class Solution {
    public int HammingDistance(int x, int y) {
        int res = 0, exc = x ^ y;
        while (exc != 0) {
            ++res;
            exc &= (exc - 1);
        }
        return res;
    }
}

```

## Java Solution

```java

class Solution {
    public int hammingDistance(int x, int y) {
        int count = 0;
        char[] binstr = Integer.toBinaryString(x ^ y).toCharArray();
        for (char c : binstr) {
            count += c == '1' ? 1 : 0;
        }
        return count;
    }
}

```

## Python Solution

```python

class Solution:
    def hammingDistance(self, x, y):
        """
        :type x: int
        :type y: int
        :rtype: int
        """
        if x > y:
            return self.hammingDistance(y, x)
        count = 0
        i = 0
        bin_x = bin(x)[2:][::-1]
        bin_y = bin(y)[2:][::-1]
        leny = len(bin_y)
        lenx = len(bin_x)
        while i < leny:
            if i < lenx:
                if bin_x[i] != bin_y[i]:
                    count += 1
            else:
                if bin_y[i] == '1':
                    count += 1
            i += 1
        return count

```





