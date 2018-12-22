
# problem 859 : BuddyStrings

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/801-900/859.BuddyStrings/problem.png"/>

## C++ Solution

```c++

static int x = []() {
    ios::sync_with_stdio(false); 
    cin.tie(NULL);              
    return 0;
}();

class Solution {
public:
    bool buddyStrings(string A, string B) {
        if (A.length() != B.length())
            return false;
        vector<char> r;
        unordered_set<char> s;
        for (int i = 0;i < A.length();++i){
            s.insert(A[i]);
            if (A[i] != B[i]){
                r.push_back(A[i]);
                r.push_back(B[i]);
            }
        }
        if (r.size() == 0 and s.size() < A.length())
            return true;
        if (r.size() != 4)
            return false;
        return r[0] == r[3] && r[1] == r[2]; 
    }
};

```

## C# Solution

```csharp

public class Solution {
     public bool BuddyStrings(string A, string B){
        if (A.Length != B.Length)
            return false;
        if (A == B){
            for (int i = 0;i < A.Length;++i)
                for (int j = i + 1; j < A.Length; j++){
                    if (A[i] == A[j])
                        return true;
                }
        }
        List<char> r = new List<char>();
        for (int i = 0;i < A.Length;++i){
            if (A[i] != B[i]){
                r.Add(A[i]);
                r.Add(B[i]);
            }
        }
        return r.Count == 4 && r[0] == r[3] && r[1] == r[2]; 
    }
}

```

## Java Solution

```java

class Solution {
    public boolean buddyStrings(String A, String B) {
        if (A.length() != B.length())
            return false;
        LinkedList<Character> r = new LinkedList<>();
        HashSet<Character> s = new HashSet<>();
        for (int i = 0;i < A.length();++i){
            s.add(A.charAt(i));
            if (A.charAt(i) != B.charAt(i)){
                r.add(A.charAt(i));
                r.add(B.charAt(i));
            }
        }
        if (r.size() == 0 && s.size() < A.length())
            return true;
        if (r.size() != 4)
            return false;
        return r.get(0) == r.get(3) && r.get(1) == r.get(2); 
    }
}

```

## Python Solution

```python

class Solution:
    def buddyStrings(self, A, B):
        """
        :type A: str
        :type B: str
        :rtype: bool
        """
        if len(A) != len(B):
            return False
        r = []
        s = set()
        for a, b in zip(A, B):
            s.add(a)
            if a != b:
                r.append((a, b))
        if len(r) == 0 and len(s) < len(A):
            return True
        if len(r) != 2:
            return False
        return r[0][0] == r[1][1] and r[0][1] == r[1][0] 

```





