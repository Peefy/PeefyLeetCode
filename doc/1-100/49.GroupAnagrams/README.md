
# Problem 49 : GroupAnagrams

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/1-100/49.GroupAnagrams/problem.png"/>

## C++ Solution

```c++

static int x = []() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, int> hash;
        vector<vector<string>> ans;
        int count = 0;
        for (auto s : strs){
            auto tmp = s;
            sort(s.begin(), s.end());
            if (hash.find(s) == hash.end()){
                hash[s] = count;
                count += 1;
                ans.push_back(vector<string>{tmp});
            }
            else
                ans[hash[s]].push_back(tmp);
        }
        return ans;
    }
};

```

## C# Solution

```csharp

public class Solution {
    public IList<IList<string>> GroupAnagrams(string[] strs) {
        Dictionary<string, int> hash = new Dictionary<string, int>();
        List<IList<string>> ans = new List<IList<string>>();
        int count = 0;
        foreach (string s in strs){
            char[] sarr = s.ToCharArray();
            string tmp = new string(sarr);  
            Array.Sort(sarr);
            var ss = new string(sarr);
            if (hash.ContainsKey(ss) == false){
                hash.Add(ss, count);
                count += 1;
                List<string> arr = new List<string>();
                arr.Add(tmp);
                ans.Add(arr);
            }
            else
                ans[hash[ss]].Add(tmp);
        }
        return ans;
    }
}

```

## Java Solution

```java

class Solution {
    public List<List<String>> groupAnagrams(String[] strs) {
        HashMap<String, Integer> hash = new HashMap<>();
        List<List<String>> ans = new LinkedList<>();
        int count = 0;
        for (String s : strs){
            String tmp = new String(s);
            char[] sarr = s.toCharArray();
            Arrays.sort(sarr);
            s = new String(sarr);
            if (hash.containsKey(s) == false){
                hash.put(s, count);
                count += 1;
                List<String> arr = new LinkedList<>();
                arr.add(tmp);
                ans.add(arr);
            }
            else
                ans.get(hash.get(s)).add(tmp);
        }
        return ans;
    }
}


```

## Python Solution

```python

class Solution:
    def groupAnagrams(self, strs):
        ans = []
        h = {}
        count = 0
        for s in strs:
            hvalue = 0
            sl = list(s)
            sl.sort()
            ss = "".join(sl)
            hvalue = hash(ss)
            if hvalue not in h.keys():
                h[hvalue] = count
                count += 1
                ans.append([s])
            else:
                ans[h[hvalue]].append(s)
        return ans

```


