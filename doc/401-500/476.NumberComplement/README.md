
# problem 476 : NumberComplement

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/401-500/476.NumberComplement/problem.png"/>

## C++ Solution

```c++

class Solution {
public:
    int findComplement(int num) {
        int r = 0;
        int n = 0;
        while (num > 0){
            (num & 0x01) == 1 ?  (r &= ~(1<<n)): (r |= (1<<n)); 
            ++n;
            num >>= 1;
        }
        return r;
    }
};

```

## C# Solution

```csharp

public class Solution {
    public int FindComplement(int num) {
        int r = 0;
        int n = 0;
        while (num > 0){
            var bit = num & 0x01;
            if (bit == 1)
                (r) &= ~(1<<(n));
            else  
                (r) |=  (1<<(n));
            ++n;
            num >>= 1;
        }
        return r;
    }
}

```

## Java Solution

```java

class Solution {
    public int findComplement(int num) {
        return ~num & ((Integer.highestOneBit(num) << 1) - 1);
    }
}

```

## Python Solution

```python

class Solution:
    def findComplement(self, num):
        """
        :type num: int
        :rtype: int
        """
        r = 0
        n = 0
        while num > 0:
            bit = num & 0x01
            if bit == 1:
                (r) &= ~(1<<(n)) 
            else:  
                (r) |=  (1<<(n))
            n += 1
            num = num >> 1
        return r

```





