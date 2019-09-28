
# problem 247 : StrobogrammaticNumberII

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/201-300/247.StrobogrammaticNumberII/problem.png"/>

## C++ Solution

```c++

class Solution {
public:
    vecotr<string> findStrobogrammatic(int n) {
        unordered_map<char, char> diffMap;
        diffMap['6'] = '9';
        diffMap['9'] = '6';
        vector<char> selfArr = { '0', '1', '8' };
        vector<string> result;
        vector<char> cache(n, '0');
        buildResult(0, n, cache, selfArr, diffMap, result);
        return result;
    }

    void buildResult(int curPos, int n, vector<char>& cache, vector<char>& selfArr, 
        unordered_map<char, char>& diffMap, vecotr<string>& result) {
        if (curPos < (n + 1) / 2) {
            for (char c : selfArr) {
                if (curPos == 0 && c == '0' && n != 1)
                    continue;
                cache[curPos] = cache[n - 1 - curPos] = c;
                buildResult(curPos + 1, n, cache, selfArr, diffMap, result);
            }
            if (n % 2 == 0 || curPos != n / 2) {
                for (auto kv : diffMap) {
                    auto c = kv.first;
                    cache[curPos] = c;
                    cache[n - 1 - curPos] = diffMap[c];
                    buildResult(curPos + 1, n, cache, selfArr, diffMap, result);
                }
            }
        } else if (n != 0) {
            result.add(string(cache));
        }
    }
};

```

## C# Solution

```csharp

public class Solution {
    public List<string> FindStrobogrammatic(int n) {
        var diffMap = new Dictionary<char, char>();
        char[] selfArr = new char[] { '0', '1', '8' };
        diffMap.Add('6', '9');
        diffMap.Add('9', '6');
        List<string> result = new List<string>();
        buildResult(0, n, new char[n], selfArr, diffMap, result);
        return result;
    }

    private void buildResult(int curPos, int n, char[] cache, char[] selfArr, Dictionary<char, char> diffMap, List<string> result) {
        if (curPos < (n + 1) / 2) {
            foreach (char c in selfArr) {
                if (curPos == 0 && c == '0' && n != 1)
                    continue;
                cache[curPos] = cache[n - 1 - curPos] = c;
                buildResult(curPos + 1, n, cache, selfArr, diffMap, result);
            }
            if (n % 2 == 0 || curPos != n / 2) {
                foreach (char c in diffMap.Keys) {
                    cache[curPos] = c;
                    cache[n - 1 - curPos] = diffMap[c];
                    buildResult(curPos + 1, n, cache, selfArr, diffMap, result);
                }
            }
        } else if (n != 0) {
            result.Add(new string(cache));
        }
    }
} 

```

## Java Solution

```java

class Solution {
    public List<String> findStrobogrammatic(int n) {
        HashMap<Character, Character> diffMap = new HashMap<>();
        char[] selfArr = new char[] { '0', '1', '8' };
        diffMap.put('6', '9');
        diffMap.put('9', '6');
        List<String> result = new LinkedList<String>();
        buildResult(0, n, new char[n], selfArr, diffMap, result);
        return result;
    }

    private void buildResult(int curPos, int n, char[] cache, char[] selfArr, HashMap<Character, Character> diffMap, List<String> result) {
        if (curPos < (n + 1) / 2) {
            for (char c : selfArr) {
                if (curPos == 0 && c == '0' && n != 1)
                    continue;
                cache[curPos] = cache[n - 1 - curPos] = c;
                buildResult(curPos + 1, n, cache, selfArr, diffMap, result);
            }
            if (n % 2 == 0 || curPos != n / 2) {
                for (char c : diffMap.keySet()) {
                    cache[curPos] = c;
                    cache[n - 1 - curPos] = diffMap.get(c);
                    buildResult(curPos + 1, n, cache, selfArr, diffMap, result);
                }
            }
        } else if (n != 0) {
            result.add(new String(cache));
        }
    }
}

```

## Python Solution

```python

class Solution:
    def buildResult(self, curPos, n, cache, selfarr, diffMap, result):
        if curPos < (n + 1) // 2:
            for c in selfarr:
                if curPos == 0 and c == '0' and n != 1:
                    continue
                cache[curPos] = cache[n - 1 - curPos] = c
                self.buildResult(curPos + 1, n, cache, selfarr, diffMap, result)
            if n % 2 == 0 or curPos != n / 2:
                for c in diffMap.keys():
                    cache[curPos] = c
                    cache[n - 1 - curPos] = diffMap[c]
                    self.buildResult(curPos + 1, n, cache, selfarr, diffMap, result)
            elif n != 0:
                result.append(''.join(cache))


    def findStrobogrammatic(self, n):
        diffMap = {}
        diffMap['6'] = '9'
        diffMap['9'] = '6'
        selfarr = ['0', '1', '8']
        result = []
        cache = ['0'] * n
        self.buildResult(0, n, cache, selfarr, diffMap, result)     

```




