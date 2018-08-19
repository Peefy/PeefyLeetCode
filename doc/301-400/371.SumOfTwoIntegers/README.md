
# problem 371 : SumOfTwoIntegers

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/301-400/371.SumOfTwoIntegers/problem.png"/>

## C++ Solution

```c++

class Solution {
public:
    int getSum(int a, int b) {
        int carry = 0;
        while (b!=0){
            carry=a&b;
            a=a^b;
            b=carry<<1;
        }
        return a;
    }
};

```

## C# Solution

```csharp

public class Solution {
    public int GetSum(int a, int b) {
        int carry = 0;
        while (b!=0){
            carry=a&b;
            a=a^b;
            b=carry<<1;
        }
        return a;
    }
}

```

## Java Solution

```java

class Solution {
    public int getSum(int a, int b) {
                int carry = 0;
        while (b!=0){
            carry=a&b;
            a=a^b;
            b=carry<<1;
        }
        return a;
    }
}

```

## Python Solution

```python

class Solution:
    def getSum(self, a, b):
        """
        :type a: int
        :type b: int
        :rtype: int
        """
        while b != 0:
            carry = a & b
            a = (a ^ b) % 0x100000000 # 转换为32位
            b = (carry << 1) % 0x100000000 # 转换为32位
        # 取反加1求补码
        return a if a <= 0x7FFFFFFF else a | (~0x100000000+1)

```





