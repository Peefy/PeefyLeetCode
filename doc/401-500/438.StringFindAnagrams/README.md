
# problem 438 : StringFindAnagrams

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/401-500/438.StringFindAnagrams/problem.png"/>

## C++ Solution

```c++

class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
            vector<int> soln;
            if (s.length() == 0 || p.length() == 0 || s.length() < p.length())
            {
                return soln;
            }
            int chars[26] = {0};
            for(auto c : p)
            {
                chars[c - 'a']++;
            }
            int left = 0, right = 0, length = s.length(), count = p.length();
            while (right < length)
            {
                char rightTemp = s[right];
                if (chars[rightTemp - 'a'] >= 1)
                {
                    count--;
                }
                chars[rightTemp - 'a']--;
                right++;
                if (count == 0)
                {
                    soln.push_back(left);
                }
                if (right - left == p.length())
                {
                    char tempLeft = s[left];
                    if (chars[tempLeft - 'a'] >= 0)
                    {
                        count++;
                    }
                    chars[tempLeft - 'a']++;
                    left++;
                }
            }
            return soln;
    }
};

```

## C# Solution

```csharp

    public class Solution
    {
        public IList<int> FindAnagrams(string s, string p)
        {
            List<int> soln = new List<int>();
            if (s.Length == 0 || p.Length == 0 || s.Length < p.Length)
            {
                return soln;
            }
            int[] chars = new int[26];
            foreach (var c in p)
            {
                chars[c - 'a']++;
            }
            int left = 0, right = 0, length = s.Length, count = p.Length;
            while (right < length)
            {
                char rightTemp = s[right];
                if (chars[rightTemp - 'a'] >= 1)
                {
                    count--;
                }
                chars[rightTemp - 'a']--;
                right++;
                if (count == 0)
                {
                    soln.Add(left);
                }
                if (right - left == p.Length)
                {
                    char tempLeft = s[left];
                    if (chars[tempLeft - 'a'] >= 0)
                    {
                        count++;
                    }
                    chars[tempLeft - 'a']++;
                    left++;
                }
            }
            return soln;
        }
    }

```

## Java Solution

```java

class Solution {
    public boolean counterEquans(int[] s, int[] p){
        for (int i = 0; i < 26; i++) {
            if (s[i] != p[i])
                return false;
        }
        return true;
    }

    public List<Integer> findAnagrams(String s, String p) {
        ArrayList<Integer> r = new ArrayList<>();
        int m = s.length();
        int n = p.length();
        if (m < n)
            return r;
        int[] s_counter = new int[26];
        int[] p_counter = new int[26];
        for (int i = 0;i < n; ++i){
            p_counter[p.charAt(i) - 'a']++;
            s_counter[s.charAt(i) - 'a']++;
        }
        if (counterEquans(s_counter, p_counter)){
            r.add(0);
        }
        for (int i = 0;i < m - n;++i){
            s_counter[s.charAt(i) - 'a']--;
            s_counter[s.charAt(i + n) - 'a']++;
            if (counterEquans(s_counter, p_counter)){
                r.add(i + 1);
            }
        }
        return r;
    }
}

```

## Python Solution

```python

class Solution:
    def findAnagrams(self, s, p):
        """
        :type s: str
        :type p: str
        :rtype: List[int]
        """
        r = []
        n = len(s)
        m = len(p)
        if n < m:
            return r
        p_dict = {}
        s_dict = {}
        for i in range(m):
            if p[i] not in p_dict.keys():
                p_dict[p[i]] = 1
            else:
                p_dict[p[i]] += 1
            if s[i] not in s_dict.keys():
                s_dict[s[i]] = 1
            else:
                s_dict[s[i]] += 1
        if s_dict == p_dict:
            r.append(0)
        for i in range(n - m):
            if s_dict[s[i]] == 1:
                s_dict.pop(s[i])
            else:
                s_dict[s[i]] -= 1
            if s[i + m] not in s_dict.keys():
                s_dict[s[i + m]] = 1
            else:
                s_dict[s[i + m]] += 1
            if s_dict == p_dict:
                r.append(i + 1)
        return r

```





