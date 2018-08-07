
# problem 290 : WordPattern

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/201-300/290.WordPattern/problem.png"/>

## C++ Solution

```c++

class Solution {
public:
    vector<string> splitstring(string str, char symbol){
        vector<string> strs;
        int count = str.length();
        int index = 0;
        int end = 0;
        for(size_t i = 0; i < count; i++)
        {
            if (str[i] == symbol){
                strs.push_back(str.substr(index, i));
                index = i + 1;
            }
        }      
        return strs;
    }

    bool wordPattern(string pattern, string str) {
        vector<string> strs = splitstring(str, ' ');
        int strscount = strs.size();
        int pcount = pattern.length();
        if (strscount != pcount)
            return false;
        map<char, string> hash;
        for (int i = 0; i < pcount; i++) {
            char c = pattern[i];
            string s = strs[i];
            if (hash.find(c) == hash.end()){
                for (auto it = hash.begin(); it != hash.end(); ++it){
                    if ((*it).second == s)
                        return false;
                }
                hash[c] = s;
            }
            else{
                if (hash[c] != s)
                    return false;
            }
        }
        return true;
    }
};

```

## C# Solution

```csharp

public class Solution {
    public bool WordPattern(string pattern, string str) {
        str = str.Replace(' ', '|');
        String[] strs = str.Split("|");
        int strscount = strs.Length;
        int pcount = pattern.Length;
        if (strscount != pcount)
            return false;
        var hash = new Dictionary<char, string>();
        for (int i = 0; i < pcount; i++) {
            char c = pattern[i];
            String s = strs[i];
            if (hash.ContainsKey(c) == false){
                if (hash.ContainsValue(s) == true) {
                    return false;
                }
                hash.Add(c, s);
            }
            else{
                if (hash[c] != s)
                    return false;
            }
        }
        return true;
    }
}

```

## Java Solution

```java

class Solution {
    public boolean wordPattern(String pattern, String str) {
        str = str.replace(' ', '|');
        String[] strs = str.split("|");
        int strscount = strs.length;
        int pcount = pattern.length();
        if (strscount != pcount)
            return false;
        HashMap<Character, String> hash = new HashMap<>();
        for (int i = 0; i < pcount; i++) {
            Character c = pattern.charAt(i);
            String s = strs[i];
            if (hash.containsKey(c) == false){
                if (hash.containsValue(s) == true) {
                    return false;
                }
                hash.put(c, s);
            }
            else{
                if (hash.get(c) != s)
                    return false;
            }
        }
        return true;
    }
}

```

## Python Solution

```python

class Solution:
    def wordPattern(self, pattern, str):
        """
        :type pattern: str
        :type str: str
        :rtype: bool
        """
        spacenum = len(pattern)
        strnew = str.split(' ')
        strnum = len(strnew)
        if strnum != spacenum:
            return False
        d = {}
        for i in range(spacenum):
            p = pattern[i]
            s = strnew[i]
            if p not in d.keys():
                if s in d.values():
                    return False
                d[p] = s
            else:
                if d[p] != s:
                    return False
        return True

```




