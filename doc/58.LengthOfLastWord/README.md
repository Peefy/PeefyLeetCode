
# problem 53 : MaxSubArray

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/58.LengthOfLastWord/problem.png"/>

## C++ Solution

```c++
class Solution
{
  public:
    int lengthOfLastWord(string s)
    {
        auto n = s.length();
        if (n == 0)
            return 0;
        int i = n - 1;
        auto length = 0;
        while (i >= 0 && s[i] == ' ')
        {
            --i;
        }
        while (i >= 0)
        {
            if (s[i] != ' ')
                ++length;
            else
                break;
            --i;
        }
        return length;
    }
};

```

## C# Solution

```csharp
public class Solution
    {
        public int LengthOfLastWord(string s)
        {
            var n = s.Length;
            if (n == 0)
                return 0;
            var i = n - 1;
            var length = 0;
            while (i >= 0 && s[i] == ' ')
            {
                --i;
            }
            while (i >= 0)
            {
                if (s[i] != ' ')
                    ++length;
                else
                    break;
                --i;
            }
            return length;
        }
    }

```

## Java Solution

```java

class Solution {
    public int lengthOfLastWord(String s) {
        char[] arr = s.toCharArray();
        int n = arr.length;
        if (n == 0)
            return 0;
        int i = n - 1;
        int length = 0;
        while (i >= 0 && arr[i] == ' ') {
            --i;
        }
        while (i >= 0) {
            if (arr[i] != ' ')
                ++length;
            else
                break;
            --i;
        }
        return length;
    }
}

```

## Python Solution

```python

class Solution:
    def lengthOfLastWord(self, s):
        """
        :type s: str
        :rtype: int
        """
        n = len(s)
        if n == 0:
            return 0
        i = n - 1
        length = 0
        while i >= 0 and s[i] == ' ':
            i -= 1
        while i >= 0:
            if s[i] != ' ':
                length += 1
            else:
                break
            i -= 1
        return length

```


