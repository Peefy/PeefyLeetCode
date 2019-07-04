
# problem 139 : WordBreak

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/101-200/139.WordBreak/problem.png"/>

## C++ Solution

```c++

class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        unordered_set<string> wordDictSet(wordDict.begin(), wordDict.end());
        vector<bool> dp(s.length() + 1, false);
        dp[0] = true;
        for (int i = 1; i <= s.length() ; i++) {
            for (int j = 0; j < i; j++) {
                if (dp[j] && wordDictSet.find(s.substr(j, i - j)) != wordDictSet.end()) {
                    dp[i] = true;
                    break;
                }
            }
        }
        return dp[s.length()];
    }
};

```

## C# Solution

```csharp

public class Solution {
    public bool WordBreak(string s, IList<string> wordDict) {
        HashSet<string> wordDictSet = new HashSet<string>(wordDict);
        bool[] dp = new bool[s.Length + 1];
        dp[0] = true;
        for (int i = 1; i <= s.Length; i++) {
            for (int j = 0; j < i; j++) {
                if (dp[j] && wordDictSet.Contains(s.Substring(j, i - j))) {
                    dp[i] = true;
                    break;
                }
            }
        }
        return dp[s.Length];
    }
}

```

## Java Solution

```java

class Solution {
    public boolean wordBreak(String s, List<String> wordDict) {
        HashSet<String> wordDictSet = new HashSet(wordDict);
        boolean[] dp = new boolean[s.length() + 1];
        dp[0] = true;
        for (int i = 1; i <= s.length(); i++) {
            for (int j = 0; j < i; j++) {
                if (dp[j] && wordDictSet.contains(s.substring(j, i))) {
                    dp[i] = true;
                    break;
                }
            }
        }
        return dp[s.length()];
    }
}

```

## Python Solution

```python

class Solution:
    def wordBreak(self, s, wordDict):
        if len(s) == 0:
            return False
        dp = [0] * (len(s) + 1)
        dp[0] = 1
        for i in range(1, len(s) + 1):
            for j in range(0, i):
                if dp[j] == 1 and s[j:i] in wordDict:
                    dp[i] = 1
        return dp[len(s)] == 1

```


