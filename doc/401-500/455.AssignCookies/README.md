
# problem 455 : AssignCookies

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/401-500/455.AssignCookies/problem.png"/>

贪心求解

## C++ Solution

```c++

class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int count = 0;
        int i = 0;
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        for (int c : s) {
            if (c >= g[i]){
                count +=1;
                if (i < g.size() - 1)
                    i += 1;
                else
                    break;
            }           
        }
        return count;
    }
};

```

## C# Solution

```csharp

public class Solution {
    public int FindContentChildren(int[] g, int[] s) {
        int count = 0;
        int i = 0;
        Array.Sort(g);
        Array.Sort(s);
        foreach (var c in s) {
            if (c >= g[i]){
                count += 1;
                if (i < g.Length - 1)
                    i += 1;
                else
                    break;
            }           
        }
        return count;
    }
}

```

## Java Solution

```java

class Solution {
    public int findContentChildren(int[] g, int[] s) {
        int count = 0;
        int i = 0;
        Arrays.sort(g);
        Arrays.sort(s);
        for (int c : s) {
            if (c >= g[i]){
                count +=1;
                if (i < g.length - 1)
                    i += 1;
                else
                    break;
            }           
        }
        return count;
    }
}

```

## Python Solution

```python

class Solution:
    def findContentChildren(self, g, s):
        """
        :type g: List[int]
        :type s: List[int]
        :rtype: int
        """
        count, i, j = 0, 0, 0
        children_n = len(g)
        cookie_n = len(s)
        g = sorted(g)
        s = sorted(s)
        while i < children_n and j < cookie_n:
            if g[i] <= s[j]:
                count += 1
                i += 1
                j += 1
            else:
                j += 1
        return count

```





