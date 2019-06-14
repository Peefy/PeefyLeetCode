
# Problem 91 : DecodeWays

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/1-100/91.DecodeWays/problem.png"/>

## C++ Solution

```c++

class Solution {
public:
    int numDecodings(string s) {
        int pp = 1;
        int p = (s[0] != '0') ? 1 : 0;
        for (int i = 1; i < s.length(); i++) {
            int twonumber = (s[i - 1] - '0') * 10 + s[i] - '0';
            int onenumber = s[i] - '0';
            int temp = p;
            p = pp * ((twonumber > 9 && twonumber <= 26) ? 1 : 0) + p * (onenumber > 0 ? 1 : 0);
            pp = temp;
        }
        return p;
    }
};

```

## C# Solution

```csharp

public class Solution {
    public int NumDecodings(string s) {
        int pp = 1;
        int p = (s[0] != '0') ? 1 : 0;
        for (int i = 1; i < s.Length; i++) {
            int twonumber = (s[i - 1] - '0') * 10 + s[i] - '0';
            int onenumber = s[i] - '0';
            int temp = p;
            p = pp * ((twonumber > 9 && twonumber <= 26) ? 1 : 0) + p * (onenumber > 0 ? 1 : 0);
            pp = temp;
        }
        return p;
    }
}

```

## Java Solution

```java

class Solution {
    public int numDecodings(String s) {
        int pp = 1;
        int p = (s.charAt(0) != '0') ? 1 : 0;
        for (int i = 1; i < s.length(); i++) {
            int twonumber = (s.charAt(i - 1) - '0') * 10 + s.charAt(i) - '0';
            int onenumber = s.charAt(i) - '0';
            int temp = p;
            p = pp * ((twonumber > 9 && twonumber <= 26) ? 1 : 0) + p * (onenumber > 0 ? 1 : 0);
            pp = temp;
        }
        return p;
    }
}

```

## Python Solution

```python

class Solution:
    def numDecodings(self, s: str) -> int:
        pp, p = 1, int(s[0] != '0')
        for i in range(1, len(s)):
            pp, p = p, pp * (9 < int(s[i-1:i+1]) <= 26) + p * (int(s[i]) > 0)
        return p

```


