
# problem 696 : CountBinarySubstrings

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/601-700/696.CountBinarySubstrings/problem.png"/>

C++ 为最优解

## C++ Solution

```c++

static int x = []() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();

class Solution{
  public:
    int countBinarySubstrings(string s){
        int res = 0, preLen = 0, curLen = 1;
        for (int i = 1; i < s.length(); i++){
            if (s[i] == s[i - 1])
                curLen += 1;
            else{
                preLen = curLen;
                curLen = 1;
            }
            if (preLen >= curLen)
                res += 1;
        }
        return res;
    }
};

```

## C# Solution

```csharp

public class Solution {
    public int CountBinarySubstrings(string s) {
        int res = 0, preLen = 0, curLen = 1;
        for (int i = 1; i < s.Length; i++){
            if (s[i] == s[i - 1])
                curLen += 1;
            else{
                preLen = curLen;
                curLen = 1;
            }
            if (preLen >= curLen)
                res += 1;
        }
        return res;
    }
}

```

## Java Solution

```java

class Solution {
    public int countBinarySubstrings(String s) {
        int res = 0, preLen = 0, curLen = 1;
        for (int i = 1; i < s.length(); i++){
            if (s.charAt(i) == s.charAt(i - 1))
                curLen += 1;
            else{
                preLen = curLen;
                curLen = 1;
            }
            if (preLen >= curLen)
                res += 1;
        }
        return res;
    }
}

```

## Python Solution

```python

class Solution:
    def countBinarySubstrings(self, s):
        """
        :type s: str
        :rtype: int
        """
        n = len(s)
        count = 0
        zerocount = 0
        onecount = 0
        lastonecount = 0
        lastzerocount = 0
        for i in range(n):
            if s[i] == '1':
                if zerocount > 0:
                    lastzerocount, zerocount = zerocount, 0
                    count += min(lastonecount, lastzerocount)
                onecount += 1 
            else:
                if onecount > 0:
                    lastonecount, onecount = onecount, 0
                    count += min(lastonecount, lastzerocount)
                zerocount += 1          
        else:
            count += min(lastonecount, zerocount) if s[-1] == '0' else min(onecount, lastzerocount)
        return count

```





