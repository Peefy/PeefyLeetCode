
# Problem 3 : LengthOfLongestSubstring

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/1-100/3.LengthOfLongestSubstring/problem.png"/>

## C++ Solution

```c++

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        if (n == 0)
            return 0;
        s.push_back(s[n - 1]);
        int count = 0;
        int fisrtpoint = 0;
        unordered_set<char> h;
        for (int i = 0;i <= n;++i){
            char c = s[i];
            if (h.find(c) == h.end()){
                h.insert(c);
            }
            else{
                count = max(count, (int)h.size());
                while (s[fisrtpoint] != c){
                    h.erase(s[fisrtpoint]);
                    fisrtpoint += 1;   
                }      
                fisrtpoint += 1;     
            }
        }
        return count;
    }
};

```

## C# Solution

```csharp

public class Solution {
    public int LengthOfLongestSubstring(string s) {
        int[] hax = new int[128];
        Array.Fill(hax, -1);
        int res = 0;
        int left = -1;
        for(int i = 0; i < s.Length; ++i){
            left = Math.Max(left, hax[s[i]]);
            hax[s[i]] = i;
            res = Math.Max(i - left, res);
        }
        return res;
    }
}

```

## Java Solution

```java

class Solution {
    public int lengthOfLongestSubstring(String s) {
        int n = s.length();
        if (n < 2) return n;
        int[] record = new int[128];
        int left = 0;
        int res = 0;
        for (int right = 0; right < n; right++){
            char cur = s.charAt(right);
            if (record[cur] > left){
                left = record[cur];
            }
            record[cur] = right + 1;     
            res = Math.max(res, right - left + 1);
        }     
        return res;
    }
}

```

## Python Solution

```python

class Solution:
    def lengthOfLongestSubstring(self, s):
        """
        :type s: str
        :rtype: int
        """
        if len(s) == 0:
            return 0
        s += s[-1]
        count = 0
        fisrtpoint = 0
        h = set()
        for i, c in enumerate(s):
            if c not in h:
                h.add(c)
            else:    
                count = max(count, len(h))
                while s[fisrtpoint] != c:
                    h.remove(s[fisrtpoint])
                    fisrtpoint += 1         
                fisrtpoint += 1     
        return count

```


