
# problem 165 : CompareVersionNumbers

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/101-200/165.CompareVersionNumbers/problem.png"/>

## C++ Solution

```c++

class Solution {
public:
    int compareVersion(string version1, string version2) {
        string delim = ".";
        int from1 = 0; int from2 = 0;
        int to1 = version1.find(delim);
        int to2 = version2.find(delim);
        while(from1 < version1.npos && from2 < version2.npos && to1 <= version2.npos && to2 <= version2.npos){
            int comp = stoi(version1.substr(from1, to1)) - stoi(version2.substr(from2, to2));
            if(comp > 0) return 1;
            if(comp < 0) return -1; 
            
            if(to1 == version1.npos && to2 == version2.npos) return 0;
            //以下两行是为了解决类似这样的case: 1.0; 1,这个实际上是相等的
            if(to1 == version1.npos) return stod(version2.substr(to2 + 1, version2.npos)) > 0 ? -1: 0;
            if(to2 == version2.npos) return stod(version1.substr(to1 + 1, version1.npos)) > 0 ? 1: 0;

            from1 = to1 + 1;
            from2 = to2 + 1;
            to1 = version1.find(delim, from1);
            to2 = version2.find(delim, from2);
        }
        return 0;
    }
};

```

## C# Solution

```csharp

public class Solution {
    public int CompareVersion(string version1, string version2) {
        var v1 = version1.Split(".");
        var v2 = version2.Split(".");
        int n = Math.Max(v1.Length, v2.Length);
        for (int i = 0; i < n; i++) {
            int v1_int = i < v1.Length ? int.Parse(v1[i]) : 0;
            int v2_int = i < v2.Length ? int.Parse(v2[i]) : 0;
            if (v1_int == v2_int) continue;
            if (v1_int > v2_int) return 1;
            else return -1;
        }
        return 0;
    }
}

```

## Java Solution

```java

class Solution {
    public int compareVersion(String version1, String version2) {
        String[] v1 = version1.split("\\.");
        String[] v2 = version2.split("\\.");
        int n = Math.max(v1.length, v2.length);
        for (int i = 0; i < n; i++) {
            int v1_int = i < v1.length ? Integer.parseInt(v1[i]) : 0;
            int v2_int = i < v2.length ? Integer.parseInt(v2[i]) : 0;
            if (v1_int == v2_int) continue;
            if (v1_int > v2_int) return 1;
            else return -1;
        }
        return 0;
    }
}

```

## Python Solution

```python

class Solution:
    def compareVersion(self, version1: str, version2: str) -> int:
        for x, y in itertools.zip_longest(version1.split("."), version2.split("."), fillvalue=0):
            if int(x) != int(y): return 1 if int(x) > int(y) else -1
        return 0

```


