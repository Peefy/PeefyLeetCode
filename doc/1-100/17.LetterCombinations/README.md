
# Problem 17 : LetterCombinations

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/1-100/17.LetterCombinations/problem.png"/>

回溯算法

## C++ Solution

```c++

static int x = []() {
    ios::sync_with_stdio(false); 
    cin.tie(NULL);              
    return 0;
}();

class Solution {
public:

    string maps[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

    vector<string> letterCombinations(string digits) {
        vector<string> res;
        if (digits.length() == 0)
            return res;
        res.push_back("");
        return recursive(digits, 0, res);
    }

    vector<string> recursive(string digits, int index, vector<string>& before){
        if (index >= digits.length())
            return before;
        vector<string> temp;
        string chars = maps[(digits[index] - '0')];
        for (char c : chars){
            for (string& beforestring : before){
                temp.push_back(beforestring + c);
            }
        }
        return recursive(digits, index + 1, temp);
    }
};


```

## C# Solution

```csharp

public class Solution {

    private string[] maps = new string[]{"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    public IList<string> LetterCombinations(string digits) {
        if (digits.Length == 0)
            return new List<string>();
        List<string> nowList = new List<string>();
        nowList.Add("");
        return recursive(digits, 0, nowList);
    }

    public List<String> recursive(String digits, int index, List<String> beforeList) {
        if (digits.Length == index)
            return beforeList;
        List<string> nowList = new List<string>();
        foreach (char c in maps[digits[index] - '0']){
            foreach (string str in beforeList){
                nowList.Add(str + c);
            }
        }
        return recursive(digits, index + 1, nowList);
    }

}

```

## Java Solution

```java

class Solution {

    private String[] maps = new String[]{"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

    public List<String> letterCombinations(String digits) {
        if (digits.length() == 0)
            return new LinkedList<>();
        List<String> nowList = new LinkedList<>();
        nowList.add("");
        return recursive(digits, 0, nowList);
    }

    public List<String> recursive(String digits, int index, List<String> beforeList) {
        if (digits.length() == index)
            return beforeList;
        List<String> nowList = new LinkedList<>();
        for (char c : maps[digits.charAt(index) - '0'].toCharArray()){
            for (String str : beforeList){
                nowList.add(str + c);
            }
        }
        return recursive(digits, index + 1, nowList);
    }

}

```

## Python Solution

```python

tb = ['abc', 'def', 'ghi', 'jkl', 'mno', 'pqrs', 'tuv', 'wxyz']
class Solution:
    def recursive(self, st, res):
        if not st:
            return res
        if not res:
            res = ['']
        res2 = []
        cs = st.pop()
        for c in cs:
            res2 += [c + x for x in res]
        return self.recursive(st, res2)

    def letterCombinations(self, digits):
        st = [tb[int(x)-2] for x in str(digits)]
        res = []
        return self.recursive(st, res)

```


