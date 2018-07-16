
# problem 205 : StringIsIsomorphic

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/201-300/205.StringIsIsomorphic/problem.png"/>

## C++ Solution

```c++

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char, char> d;
        int n = s.length();
        for(int i = 0; i < n; i++)
        {
            if (d.find(s[i]) == d.end())
            {
                for(auto it = d.begin();it != d.end();++it)
                {
                    if ((*it).second == t[i])
                        return false;
                }
                d[s[i]] = t[i];
            }
            else if (d[s[i]] != t[i])
                return false;
        }
        return true;
    }
};

```

## C# Solution

```csharp

public class Solution
    {
        public bool IsIsomorphic(string s, string t)
        {
            var d = new Dictionary<char, char>();
            var n = s.Length;
            for (int i = 0; i < n; i++)
            {
                if (d.ContainsKey(s[i]) == false)
                {
                    if (d.ContainsValue(t[i]) == true)
                        return false;
                    d.Add(s[i], t[i]);
                }
                else if (d[s[i]] != t[i])
                    return false;
            }
            return true;
        }
    }

```

## Java Solution

```java

class Solution {
    public boolean isIsomorphic(String s, String t) {
        HashMap<Character, Character> d = new HashMap<>();
        char[] s_arr = s.toCharArray();
        char[] t_arr = t.toCharArray();
        int n = s_arr.length;
        for (int i = 0; i < n; i++) {
            if (d.containsKey(s_arr[i]) == false) {
                if (d.containsValue(t_arr[i]) == true)
                    return false;
                d.put(s_arr[i], t_arr[i]);
            }
            else if(d.get(s_arr[i]) != t_arr[i])
                return false;
        }
        return true;
    }
}

```

## Python Solution

```python

class Solution:
    def isIsomorphic(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: bool
        """
        n = len(s)
        d = {}
        for i in range(n):
            if s[i] not in d.keys():
                if t[i] in d.values():
                    return False
                d[s[i]] = t[i]
            else:
                if d[s[i]] == t[i]:
                    continue
                else:
                    return False
        return True

```




