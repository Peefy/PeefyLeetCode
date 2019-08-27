
# problem 201 : BitwiseANDOfNumbersRange

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/201-300/201.BitwiseANDOfNumbersRange/problem.png"/>

## C++ Solution

```c++

class Solution {
public:
    int rangeBitwiseAnd(int m, int n) {
        int count = 0; 
        while (m != n){
            m >>= 1;
            n >>= 1;
            count++;
        }
        return n << count;
    }
};

```

## C# Solution

```csharp

public class Solution {
    public int RangeBitwiseAnd(int m, int n) {
        var count = 0;
        while (m != n)
        {
            m >>= 1;
            n >>= 1;
            count += 1;
        }
        return n << count;
    }
}

```

## Java Solution

```java

class Solution {
    public int rangeBitwiseAnd(int m, int n) {
        int count = 0; 
        while (m != n){
            m >>= 1;
            n >>= 1;
            count++;
        }
        return n << count;
    }
}

```

## Python Solution

```python

class Solution:
    def rangeBitwiseAnd(self, m, n):
        count = 0
        while m != n:
            m >>= 1
            n >>= 1
            count += 1
        return m << count

```




