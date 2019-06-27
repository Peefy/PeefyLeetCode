
# problem 131 : PalindromePartitioning

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/101-200/131.PalindromePartitioning/problem.png"/>

## C++ Solution

```c++

class Solution
{
public:
    vector<vector<string>> list;
    string s;
    vector<vector<string>> partition(string s)
    {
        this->s = s;
        vector<string> ll;
        dfs(ll, 0);
        return list;
    }

    void dfs(vector<string>& ll, int index)
    {
        if (index == s.length())
        {
            list.push_back(vector<string>(ll));
            return;
        }
        for (int i = index; i < s.length(); i++)
        {
            if (isPalindrome(index, i))
            {
                ll.push_back(s.substr(index, i + 1 - index));
                dfs(ll, i + 1);
                ll.pop_back();
            }
        }
    }

    bool isPalindrome(int start, int end)
    {
        while (start < end)
        {
            if (s[start] != s[end])
                return false;
            start++;
            end--;
        }
        return true;
    }
};

```

## C# Solution

```csharp

    public class Solution
    {
        List<IList<string>> list = new List<IList<string>>();
        string s;
        public void dfs(List<string> ll, int index)
        {
            if (index == s.Length)
            {
                list.Add(new List<string>(ll));
                return;
            }
            for (int i = index; i < s.Length; i++)
            {
                if (isPalindrome(index, i))
                {
                    ll.Add(s.Substring(index, i + 1 - index));
                    dfs(ll, i + 1);
                    ll.RemoveAt(ll.Count - 1);
                }

            }
        }

        public bool isPalindrome(int start, int end)
        {
            while (start < end)
            {
                if (s[start] != s[end])
                    return false;
                start++;
                end--;
            }
            return true;
        }
        public IList<IList<string>> Partition(string s)
        {
            this.s = s;
            List<string> ll = new List<string>();
            dfs(ll, 0);
            return list;
        }
    }

```

## Java Solution

```java

class Solution {
    List<List<String>> list = new ArrayList<>();
    String s;

    public List<List<String>> partition(String s) {
        this.s = s;
        List<String> ll = new ArrayList<>();
        dfs(ll, 0);
        return list;
    }

    public void dfs(List<String> ll, int index) {
        if (index == s.length()) {
            list.add(new ArrayList<>(ll));
            return;
        }
        for (int i = index; i < s.length(); i++) {
            if (isPalindrome(index, i)) {
                ll.add(s.substring(index, i + 1));
                dfs(ll, i + 1);
                ll.remove(ll.size() - 1);
            }

        }
    }

    public boolean isPalindrome(int start, int end) {
        while (start < end) {
            if (s.charAt(start) != s.charAt(end))
                return false;
            start++;
            end--;
        }
        return true;
    }
}

```

## Python Solution

```python

class Solution:
    def recursive(self, ans, tmp, n, s, start):
        if start == n:
            ans.append(tmp[:])
            return
        for i in range(1, n + 1):
            if start + i > n:
                break
            sub = s[start : start + i]
            if sub[::-1] == sub:
                tmp.append(sub)
                self.recursive(ans, tmp, n, s, start + i)
                tmp.pop()


    def partition(self, s):
        ans = []
        tmp = []
        self.recursive(ans, tmp, len(s), s, 0)
        return ans

```


