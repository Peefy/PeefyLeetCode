
# problem 161 : StringOneEditDistance

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/101-200/161.StringOneEditDistance/problem.png"/>

## C++ Solution

```c++

class Solution {
public:
    bool isOneEditDistance(string s, string t) {
        if (s == nullptr && t == nullptr) 
            return false;
        if (s == nullptr) return t.length() == 1;
        if (t == nullptr) return s.length() == 1;
        if (s.length() < t.length()) {
            string temp = s;
            s = t;
            t = temp;
        }
        if (s.length() == 1 && t.length() == 0) return true;
        if (s.length() > t.length() + 1) return false;
        if (s.length() == t.length()) {
            int dist = 0;
            for(int i=0; i<s.length(); i++) {
                if (s[i] != t[i]) {
                    dist ++;
                    if (dist > 1) return false;
                }
            }
            return dist == 1;
        } else {
            int dist = 0;
            for(int i=0; i<t.length(); i++) {
                if (t[i] == s[i+dist]) continue;
                dist ++;
                if (dist > 1) return false;
                if (t[i] == s[i+dist]) continue;
                return false;
            }
            return dist <= 1;
        }
    }
};

```

## C# Solution

```csharp

    public class Solution
    {
        public bool IsOneEditDistance(String s, String t)
        {
            char[] sa = s.ToCharArray();
            char[] ta = t.ToCharArray();
            if (Math.Abs(sa.Length - ta.Length) > 1) 
                return false;
            if (sa.Length < ta.Length)
            {
                char[] temp = sa;
                sa = ta;
                ta = temp;
            }
            int i = 0, j = 0;
            int dist = 0;
            while (i < sa.Length || j < ta.Length)
            {
                if (i == sa.Length) { dist++; j++; }
                else if (j == ta.Length) { dist++; i++; }
                else if (sa[i] == ta[j]) { i++; j++; }
                else
                {
                    if (i < sa.Length - 1 && sa[i + 1] == ta[j])
                    {
                        i++;
                    }
                    else
                    {
                        i++;
                        j++;
                    }
                    dist++;
                }
                if (dist > 1) return false;
            }
            return dist == 1;
        }
    }

```

## Java Solution

```java

public class Solution {
    public boolean isOneEditDistance(String s, String t) {
        if (s == null && t == null) return false;
        if (s == null) return t.length() == 1;
        if (t == null) return s.length() == 1;
        if (s.length() < t.length()) {
            String temp = s;
            s = t;
            t = temp;
        }
        if (s.length() == 1 && t.length() == 0) return true;
        if (s.length() > t.length() + 1) return false;
        if (s.length() == t.length()) {
            int dist = 0;
            for(int i=0; i<s.length(); i++) {
                if (s.charAt(i) != t.charAt(i)) {
                    dist ++;
                    if (dist > 1) return false;
                }
            }
            return dist == 1;
        } else {
            int dist = 0;
            for(int i=0; i<t.length(); i++) {
                if (t.charAt(i) == s.charAt(i+dist)) continue;
                dist ++;
                if (dist > 1) return false;
                if (t.charAt(i) == s.charAt(i+dist)) continue;
                return false;
            }
            return dist <= 1;
        }
    }
}

```

## Python Solution

```python

class Solution:
    def isOneEditDistance(self, s, t):
        if s is None and t is None:
            return False
        if s is None:
            return len(t) - 1
        if t is None:
            return len(s) - 1
        if len(s) < len(t):
            s, t = t, s
        if len(s) == 1 and len(t) == 0:
            return True
        if len(s) > len(t) + 1:
            return False
        if len(s) == len(t):
            dist = 0
            for i in range(0, len(s)):
                if s[i] != t[t]:
                    dist += 1
                    if dist > 1:
                        return False
        else:
            dist = 0 
            for i in range(0, len(t)):
                if t[i] == s[i + dist]:
                    continue
                dist += 1
                if dist > 1:
                    return False
                if t[i] == s[i + dist]:
                    continue
                return dist <= 1

```


