
# problem 783 : MinDiffInBST

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/701-800/783.MinDiffInBST/problem.png"/>

## C++ Solution

```c++

static int pr = []() {
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int count = 0;
        unordered_set<char> s;
        for (auto c : J){
            s.insert(c);
        }
        for (auto c : S){
            if (s.find(c) != s.end()){
                ++count;
            }
        }
        return count;
    }
};

```

## C# Solution

```csharp

public class Solution {
    public int NumJewelsInStones(string J, string S) {
        int count = 0;
        int jLen = J.Length;
        int sLen = S.Length;
        int a = 0, b = 0;
        for(; b < sLen; b++) {
            a = 0;
            for(; a < jLen; a++) {
                if(J[a] == S[b]) {
                    count ++;
                    break;
                }
            }
        }
        return count;
    }
}

```

## Java Solution

```java

class Solution {
    public int numJewelsInStones(String J, String S) {
        int count = 0;
        int jLen = J.length();
        int sLen = S.length();
        int a = 0, b = 0;
        for(; b < sLen; b++) {
            a = 0;
            for(; a < jLen; a++) {
                if(J.charAt(a) == S.charAt(b)) {
                    count ++;
                    break;
                }
            }
        }
        return count;
    }
}

```

## Python Solution

```python

class Solution:
    def numJewelsInStones(self, J, S):
        """
        :type J: str
        :type S: str
        :rtype: int
        """
        count = 0
        hashtable = set(J)
        for s in S:
            if s in hashtable:
                count += 1
        return count

```





