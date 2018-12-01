
# problem 693 : BinaryNumberWithAlternatingBits

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/601-700/693.BinaryNumberWithAlternatingBits/problem.png"/>

## C++ Solution

```c++

static int x = []() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();

class Solution {
public:
    bool hasAlternatingBits(int n) {
        int lastbit = n % 2;
        n /= 2;
        while(n > 0){
            int bit = n % 2;
            if (bit ^ lastbit == 0)
                return false;
            n /= 2;
            lastbit = bit;
        }
        return true;
    }
};

```

## C# Solution

```csharp

    public class Solution
    {
        public bool HasAlternatingBits(int n)
        {
            int eq = n & 1;
            while (n > 0)
            {
                n >>= 1;
                if (eq == (n & 1))
                    return false;
                eq = n & 1;
            }
            return true;
        }
    }

```

## Java Solution

```java

class Solution {
    public boolean hasAlternatingBits(int n) {
        int s1 = 1;
        int s2 = 2;       
        int t = 17;
        while (--t > 0){
            if(s1 ==n || s2 == n){
                return true;
            }
            s1 = s1 * 4 + 1;
            s2 = s2 * 4 + 2;    
        }   
        return false;
    }
}

```

## Python Solution

```python

class Solution:
    def hasAlternatingBits(self, n):
        """
        :type n: int
        :rtype: bool
        """
        binary = bin(n)[2:]
        last = binary[0]
        for i in range(1, len(binary)):
            if binary[i] == last:
                return False
            last = binary[i]
        return True

```





