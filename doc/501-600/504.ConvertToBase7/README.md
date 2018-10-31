
# problem 504 : ConvertToBase7

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/501-600/504.ConvertToBase7/problem.png"/>

## C++ Solution

```c++

class Solution {
public:
    string convertToBase7(int num) {
        auto i = num;
        auto radix = 7;
        vector<char> buf(33);
        bool negative = (i < 0);
        int charPos = 32;
        if (!negative) {
            i = -i;
        }
        while (i <= -radix) {
            buf[charPos--] = -(i % radix) + '0';
            i = i / radix;
        }
        buf[charPos] = -i + '0';
        if (negative) {
            buf[--charPos] = '-';
        }
        return string(buf.begin() + charPos, buf.end());
    }
};

```

## C# Solution

```csharp

public class Solution {
    static char[] digits = {
        '0' , '1' , '2' , '3' , '4' , '5' ,
        '6' , '7' , '8' , '9' , 'a' , 'b' ,
        'c' , 'd' , 'e' , 'f' , 'g' , 'h' ,
        'i' , 'j' , 'k' , 'l' , 'm' , 'n' ,
        'o' , 'p' , 'q' , 'r' , 's' , 't' ,
        'u' , 'v' , 'w' , 'x' , 'y' , 'z'
    };
    public string ConvertToBase7(int num) {
        var i = num;
        var radix = 7;
        char[] buf = new char[33];
        bool negative = (i < 0);
        int charPos = 32;

        if (!negative) {
            i = -i;
        }

        while (i <= -radix) {
            buf[charPos--] = digits[-(i % radix)];
            i = i / radix;
        }
        buf[charPos] = digits[-i];

        if (negative) {
            buf[--charPos] = '-';
        }

        return new String(buf, charPos, (33 - charPos));
    }
}

```

## Java Solution

```java

class Solution {
    public String convertToBase7(int num) {
        if (num == 0) {
            return "0";
        }
        int absnum = num > 0 ? num : -num;
        int jinzhi = 7;
        LinkedList<Character> base7list = new LinkedList<>();
        while (absnum > 0){
            base7list.add((char)(absnum % jinzhi + '0'));
            absnum /= jinzhi;
        }       
        if (num < 0)
            base7list.add('-');
        Collections.reverse(base7list);
        return base7list.stream()
                .map(String::valueOf)
                .collect(Collectors.joining());
    }
}

```

## Python Solution

```python

class Solution:
    def convertToBase7(self, num):
        """
        :type num: int
        :rtype: str
        """
        if num == 0:
            return '0'
        base7list = []
        jinzhi = 7
        absnum = abs(num)
        while absnum > 0:
            base7list.append(str(absnum % jinzhi))
            absnum //= jinzhi
        if num < 0:
            base7list.append('-')
        return ''.join(base7list[::-1])

```





