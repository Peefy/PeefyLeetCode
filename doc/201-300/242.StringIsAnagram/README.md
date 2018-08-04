
# problem 242 : StringIsAnagram

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/201-300/242.StringIsAnagram/problem.png"/>

最优解法为C#，空间复杂度O(1),时间复杂度O(n)

## C++ Solution

```c++

class Solution {
public:
    bool isAnagram(string s, string t) {
        int s_counter[26] = {0};
        int t_counter[26] = {0};
        int s_len = s.length();
        int t_len = t.length();      
        if (s_len != t_len) {
            return false;
        }
        for(int i = 0; i < s_len; i++)
        {
            s_counter[s[i] - 'a'] += 1;
            t_counter[t[i] - 'a'] += 1;
        }
        for(int i = 0; i < 26; i++)
        {
            if (s_counter[i] != t_counter[i])
                return false;
        }
        return true;
    }
};

```

## C# Solution

```csharp

public class Solution {
    public bool IsAnagram(string s, string t) {
        int ret = 0;
        int s_times = 1;
        int t_times = 1;

        for (int i = 0; i < s.Length; i++)
        {
            int c = s[i] - 'a';
            ret ^= c;
            s_times *= c;
        }

        for (int i = 0; i < t.Length; i++)
        {
            int c = t[i] - 'a';
            ret ^= c;
            t_times *= c;
        }
        return ret == 0 && s_times == t_times;
    }
}

```

## Java Solution

```java

class Solution {
    public boolean isAnagram(String s, String t) {
        char[] s_arr = s.toCharArray();
        char[] t_arr = t.toCharArray();
        int s_len = s_arr.length;
        int t_len = t_arr.length;
        if (s_len != t_len)
            return false;
        HashMap<Character, Integer> hash = new HashMap<>();
        for (int i = 0; i < s_len; i++) {
            if (hash.containsKey(s_arr[i]) == false) {
                hash.put(s_arr[i], 1);
            }
            else{
                Integer count = hash.get(s_arr[i]);
                hash.remove(s_arr[i]);
                hash.put(s_arr[i], count + 1);
            }
        }
        for (int i = 0; i < t_len; i++) {
            if (hash.containsKey(t_arr[i]) == false) {
                return false;
            }
            else{
                Integer count = hash.get(t_arr[i]);
                if (count == 0)
                    return false;
                hash.remove(t_arr[i]);
                hash.put(t_arr[i], count - 1);
            }
        }
        return true;
    }
}

```

## Python Solution

```python


class Solution:
    def isAnagram(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: bool
        """
        n1 = len(s)
        n2 = len(t)
        if n1 != n2:
            return False
        d1 = {}
        d2 = {}
        for i in range(n1):
            if s[i] not in d1.keys():
                d1[s[i]] = 1
            else:
                d1[s[i]] += 1
        for i in range(n2):
            if t[i] not in d2.keys():
                d2[t[i]] = 1
            else:
                d2[t[i]] += 1
        return d1 == d2

```




