
# problem 187 : RepeatedDNASequences

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/101-200/187.RepeatedDNASequences/problem.png"/>

## C++ Solution

```c++

class Solution{
public:
    int returnChar(char c){
        switch (c){
        case 'A':
            return 0;

        case 'C':
            return 1;

        case 'G':
            return 2;

        case 'T':
            return 3;
        }
        return 0;
    }
    vector<string> findRepeatedDnaSequences(string s){
        int n = s.length();
        vector<string> res;
        if (n <= 10)
            return res;
        bitset<1 << 20> S1;
        bitset<1 << 20> S2;
        int val = 0;
        for (int i = 0; i < 10; ++i)
            val = (val << 2) | returnChar(s[i]);
        S1.set(val);
        int mask = (1 << 20) - 1;
        for (int i = 10; i < n; ++i){
            val = ((val << 2) & mask) | returnChar(s[i]);
            if (S2[val])
                continue;
            if (S1[val]){
                res.push_back(s.substr(i - 9, 10));
                S2.set(val);
            }
            else{
                S1.set(val);
            }
        }
        return res;
    }
};

```

## C# Solution

```csharp

public class Solution {
    public IList<string> FindRepeatedDnaSequences(string s) {
        var result = new HashSet<string>();
            if (s.Length <= 10) return new List<string>(result);
            var seqs = new HashSet<string>();
            for (var i = 0; i + 10 <= s.Length; ++i)
            {
                var cur_seq = s.Substring(i, 10);
                if (seqs.Contains(cur_seq)) result.Add(cur_seq);
                seqs.Add(cur_seq);
            }
            return new List<string>(result);
    }
}

```

## Java Solution

```java

class Solution {
    public List<String> findRepeatedDnaSequences(String s) {
        HashSet<String> result = new HashSet<>();
        if (s.length() <= 10) 
            return new LinkedList<>(result);
        HashSet<String> seqs = new HashSet<>();
        for (int i = 0; i + 10 <= s.length(); ++i){
            String cur_seq = s.substring(i, i + 10);
            if (seqs.contains(cur_seq)) 
                result.add(cur_seq);
            seqs.add(cur_seq);
        }
        return new LinkedList<>(result);
    }
}


```

## Python Solution

```python

class Solution:
    def findRepeatedDnaSequences(self, s):
        K = 10
        visited = set()
        res = set()
        for i in range(len(s) - K + 1):
            tmp = s[i:i+K]
            if tmp in visited:
                res.add(tmp)
            visited.add(tmp)
        return list(res)

```


