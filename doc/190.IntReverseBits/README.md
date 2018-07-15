
# problem 190 : IntReverseBits

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/190.IntReverseBits/problem.png"/>

## C++ Solution

```c++

class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t r = 0;
        for (int i = 0; i < 32; i++) {
            r <<= 1;
            int bit = (((n)>>(i))&0x01);  
            r |= bit;           
        }
        return r;
    }
};

```

## C# Solution

```csharp


    public class Solution {
        public uint reverseBits (uint n) {
            char[] tmp = Convert.ToString (n, 2).ToCharArray ();
            Array.Reverse (tmp);
            return Convert.ToUInt32 (new string (tmp), 2) << (32 - tmp.Length);
        }
    }


```

## Java Solution

```java
public class Solution {
    // you need treat n as an unsigned value
    public int reverseBits(int n) {
        int r = 0;
        for (int i = 0; i < 32; i++) {
            int bit = (((n)>>(i))&0x01);  
            if (bit == 1)
                r |=  (1<<( 31 - i));   
            else
                r &= ~(1<<(31 - i));
        }
        return r;
    }
}

```

## Python Solution

```python

class Solution:
    # @param n, an integer
    # @return an integer
    def reverseBits(self, n):
        JINZHI = 2
        num = 0
        for i in range(32):
            bit =  n % JINZHI
            n = n // JINZHI
            num += 2 ** (31 - i) * bit
        return num

```



