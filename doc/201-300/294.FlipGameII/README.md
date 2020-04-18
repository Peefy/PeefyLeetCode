
# problem 294 : FlipGameII

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/201-300/294.FlipGameII/problem.png"/>

## C++ Solution

```c++

class Solution {
public:
    bool canWin(string s) {
        for (int i = 1; i < s.size(); ++i) {
            if (s[i] == '+' && s[i - 1] == '+' && !canWin(s.substr(0, i - 1) + "--" + s.substr(i + 1))) {
                return true;
            }
        }
        return false;
    }
};

```

## C# Solution

```csharp

    public class Solution
    {
        public bool CanWin(string s)
        {
            for (int i = 0; i < s.Length - 1; i++)
            {
                if (s[i] == '+' && s[i + 1] == '+')
                {
                    StringBuilder sb = new StringBuilder(s);
                    sb[i] = '-';
                    sb[i + 1] = '-';
                    if (!CanWin(sb.ToString()))
                        return true;
                }
            }
            return false;
        }
    }

```

## Java Solution

```java

public class Solution {
    public boolean canWin(String s) {
        for ( int i = 0; i < s.length() - 1; i ++ ){
            if ( s.charAt ( i ) == '+' && s.charAt( i + 1 ) == '+' ){
                StringBuilder sb = new StringBuilder ( s );
                sb.setCharAt ( i , '-');
                sb.setCharAt ( i + 1 ,'-');
                if ( !canWin ( sb.toString() ) )
                    return true;
            }
        }
        return false;
    }
}

```

## Python Solution

```python

class Solution:
    def canWin(self, s):
        for i in range(len(s) - 1): 
            if s[i:i+2] == "++":
                current = s[0:i] + "--" + s[i+2:] 
                if not self.canWin(current): 
                    return True 
        return False      

```




