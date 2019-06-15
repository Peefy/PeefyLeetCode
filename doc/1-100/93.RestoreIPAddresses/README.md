
# Problem 93 : RestoreIPAddresses

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/1-100/93.RestoreIPAddresses/problem.png"/>

## C++ Solution

```c++

class Solution
{
public:
    void rescue(string s, int n, string& res, vector<string>& list){
        if (s.length() <= 0)
            return;
        if (n == 0){
            int num = atoi(s.c_str());
            if (num >= 0 && num < 256 && (s[0] != '0' || s.length() == 1)){
                res = res + s;
                list.push_back(res);
            }
            return;
        }
        if (s.length() > 3 * (n + 1) || s.length() <= n)
            return;
        for (int i = 1; i <= 3; i++){
            if (s[0] == '0')
            {
                rescue(s.substr(i), n - 1, res + s.substr(0, i) + ".", list);
                break;
            }
            if (s.length() > i)
            {
                int integer1 = atoi(s.substr(0, i).c_str()); 
                if (integer1 < 256)
                    rescue(s.substr(i), n - 1, res + s.substr(0, i) + ".", list);
            }
        }
    }
    vector<string> restoreIpAddresses(string s)
    {
        vector<string> strings;
        if (s.length() > 12) {
            return strings;
        }
        rescue(s, 3, "", strings);
        return strings;
    }
};

```

## C# Solution

```csharp

public class Solution {
    public void recursive(List<string> ans, List<string> tmp, char[] s, int l, int index){
        if (tmp.Count == 4 && l == s.Length){
            ans.Add(String.Join(".", tmp));
            return;
        }
        for (int i = index; i < 4; i++) {
            for (int j = 1; j < 4; j++) {
                if (l + j > s.Length || (s[l] == '0' && j > 1))
                    continue;
                int num = 0;
                for (int k = 0; k < j; ++k) {
                    num = num * 10 + s[l + k] - '0';
                }
                if (num > 255)
                    continue;
                l += j;
                tmp.Add(num.ToString());
                recursive(ans, tmp, s, l, i + 1);
                tmp.RemoveAt(tmp.Count - 1);
                l -= j;
            }
        }
    }
    public IList<string> RestoreIpAddresses(string s) {
        List<string> ans = new List<string>();
        List<String> tmp = new List<string>();
        recursive(ans, tmp, s.ToCharArray(), 0, 0);
        return ans;
    }
}

```

## Java Solution

```java

class Solution {

    public void recursive(List<String> ans, LinkedList<String> tmp, char[] s, int l, int index){
        if (tmp.size() == 4 && l == s.length){
            ans.add(String.join(".", tmp));
            return;
        }
        for (int i = index; i < 4; i++) {
            for (int j = 1; j < 4; j++) {
                if (l + j > s.length || (s[l] == '0' && j > 1))
                    continue;
                int num = 0;
                for (int k = 0; k < j; ++k) {
                    num = num * 10 + s[l + k] - '0';
                }
                if (num > 255)
                    continue;
                l += j;
                tmp.add(String.valueOf(num));
                recursive(ans, tmp, s, l, i + 1);
                tmp.removeLast();
                l -= j;
            }
        }
    }

    public List<String> restoreIpAddresses(String s) {
        List<String> ans = new ArrayList<>();
        LinkedList<String> tmp = new LinkedList<>();
        recursive(ans, tmp, s.toCharArray(), 0, 0);
        return ans;
    }
}


```

## Python Solution

```python

class Solution:
    def restoreIpAddresses(self, s: str):
        ans = []
        tmp = []
        self.recursive(ans, tmp, s, 0, 0)
        return ans


    def recursive(self, ans, tmp, s, l, index):
        if len(tmp) == 4 and l == len(s):
            ans.append('.'.join(tmp[:])) 
            return
        for i in range(index, 4):
            for j in range(1, 4):
                if l + j > len(s):
                    continue
                if s[l] == '0' and j > 1:
                    continue
                num = int(s[l:l+j])
                if num > 255:
                    continue
                l += j
                tmp.append(str(num))
                self.recursive(ans, tmp, s, l, i + 1)
                tmp.pop()
                l -= j

```


