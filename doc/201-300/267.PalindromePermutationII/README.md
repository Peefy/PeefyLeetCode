
# problem 267 : PalindromePermutationII

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/201-300/267.PalindromePermutationII/problem.png"/>

## C++ Solution

```c++

class Solution {
public:
    vector<string> generatePalindromes(string s) {
        unordered_map<char,int> hash;
        for (auto c : s) 
            hash[c]++;
        vector<string> result;
        char center = '\0';
        for (auto x : hash) {
            if(x.second % 2 == 1) {
                if (center != '\0') 
                    return result;
                else 
                    center = x.first;
            }
        }
        string cur = "";
        if(center!='\0') 
        {
            hash[center]--;
            if(hash[center] == 0) hash.erase(center);
            cur.push_back(center);
        }
        permutate(cur, hash, result); 
        return result;
    }
    
    void permutate(string& cur, unordered_map<char, int>& hash, vector<string>& result) {
        if (hash.size() == 0) {
            result.push_back(cur);
            return;
        }
        for (auto x : hash) {
            string next = x.first + cur + x.first;
            hash[x.first] -= 2;
            if (hash[x.first] == 0) 
                temp.erase(x.first);
            permutate(next, hash, result);
            temp[x.first] += 2;
        }
    }
};

```

## C# Solution

```csharp

    public class Solution
    {
        public List<string> generatePalindromes(string s)
        {
            var ans = new List<string>();
            var h = new Dictionary<char, int>();
            char center = '\0';
            foreach (var c in s)
            {
                if (h.ContainsKey(c) == false)
                {
                    h.Add(c, 1);
                }
                else
                {
                    h[c] += 1;
                }
                foreach (var kv in h)
                {
                    if (kv.Value % 2 == 1)
                    {
                        if (center != '\0')
                            return ans;
                        center = kv.Key;
                    }
                }
            }
            string cur = "";
            if (center != '\0')
            {
                h[center] += 1;
                if (h[center] == 0)
                    h.Remove(center);
                cur = cur + center;
            }
            permute(cur, h, ans);
            return ans;
        }

        private void permute(string cur, Dictionary<char, int> h, List<string> ans)
        {
            if (h.Count == 0)
            {
                ans.Add(cur);
                return;
            }
            foreach (var kv in h)
            {
                var n = kv.Key + cur + kv.Key;
                var k = kv.Key;
                h[k] -= 2;
                if (h[k] == 0)
                    h.Remove(k);
                permute(n, h, ans);
                if (h.ContainsKey(k) == false)
                {
                    h.Add(k, 2);
                }
                else
                {
                    h[k] += 2;
                }
            }
        }
    }

```

## Java Solution

```java

class Solution {
    public List<String> generatePalindromes(String s) {
        List<String> ans = new ArrayList<>();
        HashMap<Character, Integer> h = new HashMap<>();
        char center = '\0';
        for (char c : s.toCharArray()) {
            if (h.containsKey(c) == false) {
                h.put(c, 1);
            }
            else {
                h.replace(c, h.get(c) + 1);
            }
            for (Entry<Character, Integer> kv : h.entrySet()) {
                if (kv.getValue() % 2 == 1) {
                    if (center != '\0')
                        return ans;
                    center = kv.getKey();
                }
            }
        }
        String cur = "";
        if (center != '\0') {
            h.replace(center, h.get(center) - 1);
            if (h.get(center) == 0)
                h.remove(center);
            cur = cur + center;
        }
        permute(cur, h, ans);
        return ans;
    }

    public void permute(String cur, HashMap<Character, Integer> h, List<String> ans) {
        if (h.size() == 0) {
            ans.add(cur);
            return;
        }
        for (Entry<Character, Integer> kv : h.entrySet()) {
            String n = kv.getKey() + cur + kv.getKey();
            char k = kv.getKey();
            h.replace(k, h.get(k) - 2);
            if (h.get(k) == 0)
                h.remove(k);
            permute(n, h, ans);
            if (h.containsKey(k) == false) {
                h.put(k, 2);
            }
            else {
                h.replace(k, h.get(k) + 2);
            }
        }
    }
}

```

## Python Solution

```python


from collections import Counter

class Solution:
    def generatePalindromes(self, s):
        h = Counter(s)
        center = '\0'
        ans = []
        for (k, v) in h.items():
            if v % 2 == 1:
                if center != '\0':
                    return ans
                center = k
        cur = ''
        if center != '\0':
            h[center] -= 1
            if h[center] == 0:
                h.pop(center)
            cur = cur + center
        self.permute(cur, h, ans)
        return ans


    def permute(self, cur, h, ans):
        if len(h) == 0:
            ans.append(cur[:])
            return
        for (k, v) in h.items():
            n = k + cur + k
            h[k] -= 2
            if h[k] == 0:
                h.pop(k)
            self.permute(n, h, ans)
            if k not in h:
                h[k] = 2
            else:
                h[k] += 2

```




