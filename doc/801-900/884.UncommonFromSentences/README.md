
# problem 884 : UncommonFromSentences

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/801-900/884.UncommonFromSentences/problem.png"/>

## C++ Solution

```c++

static int x = []() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution
{
  public:
    vector<string> split(const string &str, const string &delim){
        vector<string> res;
        if ("" == str)
            return res;
        char *strs = new char[str.length() + 1];
        strcpy(strs, str.c_str());
        char *d = new char[delim.length() + 1];
        strcpy(d, delim.c_str());
        char *p = strtok(strs, d);
        while (p){
            string s = p;
            res.push_back(s);
            p = strtok(NULL, d);
        }
        return res;
    }

    vector<string> uncommonFromSentences(string A, string B){
        unordered_map<string, int> hash;
        vector<string> r;
        auto Astrlist = split(A, " ");
        auto Bstrlist = split(B, " ");
        for (auto s : Astrlist) {
            hash[s] += 1;
        }
        for (auto s : Bstrlist) {
            hash[s] += 1;
        }
        for (auto kv : hash) {
            if (kv.second == 1) {
                r.push_back(kv.first);
            }
        }
        return r;
    }
};

```

## C# Solution

```csharp

public class Solution {
    public string[] UncommonFromSentences(string A, string B) {
        Dictionary<string, int> hash = new Dictionary<string, int>();
        List<string> r = new List<string>();
        foreach (string s in A.Split(' ')) 
        {
            if (hash.ContainsKey(s) == false)
            {
                hash.Add(s, 1);
            }
            else
            {
                hash[s] += 1;
            }
        }
        foreach (string s in B.Split(' ')) 
        {
            if (hash.ContainsKey(s) == false)
            {
                hash.Add(s, 1);
            }
            else
            {
                hash[s] += 1;
            }
        }
        foreach (string key in hash.Keys) 
        {
            if (hash[key] == 1) {
                r.Add(key);
            }
        }
        return r.ToArray();
    }
}

```

## Java Solution

```java

class Solution {
    public String[] uncommonFromSentences(String A, String B) {
        HashMap<String, Integer> hash = new HashMap<>();
        LinkedList<String> r = new LinkedList<>();
        for (String s : A.split(" ")) {
            hash.put(s, hash.getOrDefault(s, 0) + 1);
        }
        for (String s : B.split(" ")) {
            hash.put(s, hash.getOrDefault(s, 0) + 1);
        }
        for (String key : hash.keySet()) {
            if (hash.get(key) == 1) {
                r.add(key);
            }
        }
        return r.toArray(new String[r.size()]);
    }
}

```

## Python Solution

```python

class Solution:
    def uncommonFromSentences(self, A, B):
        """
        :type A: str
        :type B: str
        :rtype: List[str]
        """
        from collections import Counter
        counter = Counter(A.split(' ') + B.split(' '))
        r = []
        for (k, v) in counter.items():
            if v == 1:
                r.append(k)
        return r

```





