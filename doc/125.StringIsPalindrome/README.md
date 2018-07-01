
# problem 125 : StringIsPalindrome

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/125.StringIsPalindrome/problem.png"/>

## C++ Solution

```c++

#define IS_UPPER(c) (((c) >= 'A') && ((c) <= 'Z'))
#define IS_LOWER(c) (((c) >= 'a') && ((c) <= 'z'))
#define IS_DIGITNUM(c) (((c) >= '0') && ((c) <= '9'))

class Solution
{
  public:
    bool isPalindrome(string s)
    {
        int n = s.length();  
        string newstr = "";
        for(int i = 0; i < n; i++)
        {
            if (IS_DIGITNUM(s[i]) == true)
            {
                newstr += s[i];
            }
            else if (IS_LOWER(s[i]) == true)
            {
                newstr += s[i];
            }
            else if (IS_UPPER(s[i]) == true)
            {
                newstr += (('a' - 'A') + s[i]);
            }
        }
        auto new_n = newstr.length();
        for(int i = 0; i < new_n; i++)
        {
            if (newstr[i] != newstr[new_n - i - 1])
                return false;
        }
        return true;       
    }
};

```

## C# Solution

```csharp

using System.Text.RegularExpressions;    

public class Solution
    {
        public bool IsPalindrome(string s)
        {
            if (s == null)
                return false;
            if (s == "")
                return true;
            s = Regex.Replace(s, "[^0-9a-zA-Z]", "");
            s = s.ToLower();
            int n = s.Length;
            for (int i = 0; i < n; i++)
            {
                if (s[i] != s[n - i - 1])
                    return false;
            }
            return true;
        }
    }

```

## Java Solution

```java

class Solution {
    public boolean isPalindrome(String s) {
        if (s == null)
            return false;
        if (s == "")
            return true;
        s = s.replaceAll("[^0-9a-zA-Z]", "");
        s = s.toLowerCase();
        int n = s.length();
        for (int i = 0; i < n; i++) {
            if (s.charAt(i) != s.charAt(n - i - 1))
                return false;
        }
        return true;
    }
}

```

## Python Solution

```python

import re

class Solution:
    def isPalindrome(self, s):
        """
        :type s: str
        :rtype: bool
        """
        if s is None:
            return False
        if s == '':
            return True      
        s = re.sub(r'[^0-9a-zA-z]', '', s)
        s = re.sub(r'[`?~`!@#$%^&*()]*', '', s)
        s = s.upper()
        n = len(s)
        for i in range(n):
            if s[i] != s[n - i - 1]:
                return False
        return True

```


