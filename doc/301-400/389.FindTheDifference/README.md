
# problem 389 : FindTheDifference

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/301-400/389.FindTheDifference/problem.png"/>

* python 可以用Counter

## C++ Solution

```c++

class Solution {
public:
    char findTheDifference(string s, string t) {
        int res = 0;
        for(auto c : s)
            res -= c;
        for(auto c : t)
            res += c;
        return (char)res;
    }
};

```

## C# Solution

```csharp

public class Solution {
    public char FindTheDifference(string s, string t) {
        var res = 0;
        foreach(var c in s)
            res -= c;
        foreach(var c in t)
            res += c;
        return (char)res;
    }
}

```

## Java Solution

```java

class Solution {
    public char findTheDifference(String s, String t) {
        char[] s_arr = s.toCharArray();
        char[] t_arr = t.toCharArray();
        int[] record = new int[26];
        for (int i = 0; i < s_arr.length; i++) {
            record[s_arr[i] - 'a']++;
        }
        for (int i = 0; i < t_arr.length; i++) {
            record[t_arr[i] - 'a']--;
        }
        for (int i = 0;i < 26;++i){
            if (record[i] == -1)
                return (char)(i + 'a');
        }
        return 'a';
    }
}

```

## Python Solution

```python

class Solution:
    def findTheDifference(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: str
        """
        res = 0
        for e in s:
            res -= ord(e)
        for e in t:
            res += ord(e)
        return chr(res)
        # return list(collections.Counter(t)-collections.Counter(s))[0]

```





