
# problem 288 : UniqueWordAbbreviation

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/201-300/288.UniqueWordAbbreviation/problem.png"/>

## C++ Solution

```c++

class Solution {
private:
    map<string, set<string>> abbrs;

    string abbr(string word) {
        if (word.length() <= 2)
            return word;
        stringstream ss;
        ss << word[0];
        ss << word.length() - 2;
        ss << word[word.length() - 1];
        return ss.str();
    }
public:
    Solution(vector<string> dictionary) {
        for (string word : dictionary) {
            string abbr = abbr(word);
            if (abbrs.find(abbr) == abbrs.end()) {
                set<string> words;
                abbrs[abbr] = words;
            }
            else
                abbrs[abbr].add(word);
        }
    }
 
    bool isUnique(string word) {
        if (abbrs.find(abbr(word)) == abbrs.end())
            return true;
        auto words = abbrs[abbr(word)];
        if (words.size() == 0)
            return true;
        if (words.size() == 1 && words.find(word) != words.end()) 
            return true;
        return false;
    }
};

```

## C# Solution

```csharp

public class Solution {
    private Dictionary<string, HashSet<string>> abbrs = 
        new Dictionary<string, HashSet<string>>();
 
    private string abbr(string word) {
        if (word.Length <= 2) return word;
        stringBuilder sb = new stringBuilder();
        sb.Append(word[0]);
        sb.Append(word.Length - 2);
        sb.Append(word[word.Length - 1]);
        return sb.Tostring();
    }

    public Solution(string[] dictionary) {
        foreach (string word in dictionary) {
            string abbr = abbr(word);
            HashSet<string> words = abbrs[abbr];
            if (words == null) {
                words = new HashSet<string>();
                abbrs.Add(abbr, words);
            }
            words.Add(word);
        }
    }
 
    public bool IsUnique(string word) {
        HashSet<string> words = abbrs[abbr(word)];
        if (words == null || words.Count == 0) return true;
        if (words.Count == 1 && words.Contains(word)) return true;
        return false;
    }
}

```

## Java Solution

```java

class Solution {
    private HashMap<String, HashSet<String>> abbrs = new HashMap<>();
 
    private String abbr(String word) {
        if (word.length() <= 2) return word;
        StringBuilder sb = new StringBuilder();
        sb.append(word.charAt(0));
        sb.append(word.length()-2);
        sb.append(word.charAt(word.length()-1));
        return sb.toString();
    }

    public Solution(String[] dictionary) {
        for(String word: dictionary) {
            String abbr = abbr(word);
            HashSet<String> words = abbrs.get(abbr);
            if (words == null) {
                words = new HashSet<>();
                abbrs.put(abbr, words);
            }
            words.add(word);
        }
    }
 
    public boolean isUnique(String word) {
        HashSet<String> words = abbrs.get(abbr(word));
        if (words == null || words.isEmpty()) return true;
        if (words.size() == 1 && words.contains(word)) return true;
        return false;
    }
}

```

## Python Solution

```python

class Solution:
    def __init__(self):
        self.abbrs = dict()
        abbrs = self.abbrs
        for word in dictionary:
            abbr = self.abbr(word)
            if abbr not in abbrs:
                abbrs[abbr] = {}
            else:
                abbrs[abbr].insert(word);

    def abbr(self, word):
        if (len(word) <= 2)
            return word
        return str(word[0]) + str(len(word) - 2) + str(word[-1])

    def isUnique(self, word):
        abbrs = self.abbrs
        if self.abbr(word) in abbrs:
            return True;
        words = abbrs[self.abbr(word)]
        if len(words) == 0:
            return True
        if len(words) == 1 and word in words:
            return True
        return False

```




