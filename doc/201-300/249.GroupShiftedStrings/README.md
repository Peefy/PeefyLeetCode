
# problem 249 : GroupShiftedStrings

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/201-300/249.GroupShiftedStrings/problem.png"/>

## C++ Solution

```c++

class Solution {
public:
    vector<vector<string>> groupStrings(vector<string>& strings) {
        vector<vector<string>> ans;
        unordered_map<string, multiset<string>>m;
        for (auto a : strings) {
            string t = "";
            for (char cc : a) {
                t = t + to_string((cc - a[0] + 26) % 26) + ",";
            }
            m[t].insert(a);
        }
        for (auto it = m.begin(); it != m.end(); it++) {
            ans.push_back(vector<string>(it->second.begin(), it->second.end()));
        }
        return ans;
    }
};

```

## C# Solution

```csharp

class Solution {
    public List<List<string>> GroupStrings2(string[] strings) {
        List<List<string>> res = new List<List<string>>();
        Dictionary<string, List<string>> m = new Dictionary<string, List<string>>();
        foreach (var a in strings) {
            StringBuilder sb = new StringBuilder();
            foreach (var c in a) {
                sb.Append((c + 26 - a[0]) % 26);
                sb.Append(",");
            }
            var t = sb.ToString();
            if(m.ContainsKey(t) == true)
                m[t].Add(a);
            else {
                m.Add(t, new List<string>());
                m[t].Add(a);
            }
        }
        res.AddRange(m.Values.ToList());
        return res;
    }
}

```

## Java Solution

```java

class Solution {
    public List<List<String>> groupStrings2(String[] strings) {
        List<List<String>> res= new ArrayList<List<String>>();
        HashMap<String, ArrayList<String>> m = new HashMap<String, ArrayList<String>>();

        for (String a : strings) {
            StringBuilder sb = new StringBuilder();
            for (char c : a.toCharArray()) {
                sb.append((c + 26 - a.charAt(0)) % 26);
                sb.append(",");
            }
            String t =sb.toString();
            if(m.containsKey(t))
                m.get(t).add(a);
            else {
                m.put(t, new ArrayList<>());
                m.get(t).add(a);
            }
        }
        res.addAll(m.values());    
        return res;
    }
}

```

## Python Solution

```python

class Solution:
    def groupStrings(self, strings):
        ans = []
        m = {}
        for s in strings:
            t = ''
            for cc in s:
                t += str((ord(cc) - ord(s[0]) + 26) % 26) + ','
            if t not in m:
                m[t] = []
                m[t].append(s)
            else:
                m[t].append(s)

        for kv in m.values():
            ans.append(kv[:])
        return ans     

```




