
# problem 344 : ReverseString

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/301-400/344.ReverseString/problem.png"/>

## C++ Solution

```c++
class Solution {
public:
    string reverseString(string s) {      
        reverse(s.begin(),s.end());
        return s;
    }
};

```

## C# Solution

```csharp

public class Solution {
    public string ReverseString(string s) {
        return new string(s.Reverse().ToArray());
    }
}

```

## Java Solution

```java

class Solution {
    public String reverseString(String s) {
        char[] chars = s.toCharArray();
        int n = chars.length;
        for (int i = 0; i < n / 2; i++) {
            char tmp = chars[i];  
            chars[i] = chars[n - i - 1];
            chars[n - i - 1] = tmp;
        }
        return new String(chars);
    }
}

```

## Python Solution

```python

class Solution:
    def reverseString(self, s):
        """
        :type s: str
        :rtype: str
        """
        return s[::-1]

```





