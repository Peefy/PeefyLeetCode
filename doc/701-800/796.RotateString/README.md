
# problem 796 : RotateString

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/701-800/796.RotateString/problem.png"/>

java代码为最优解

## C++ Solution

```c++

static int pr = []() {
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    bool rotateString(string A, string B) {
        int nA = A.length();
        int nB = B.length();
        if (nA != nB)
            return false;
        if (A == "")
            return true;
        for (int i = 0; i < nA; i++) {
            A = A.substr(1) + A[0];
            if (A == B)
                return true;
        }
        return false;
    }
};

```

## C# Solution

```csharp

public class Solution {
    public bool RotateString(string A, string B) {
        if (A.Length != B.Length)
            return false;
        return (A + A).Contains(B);
    }
}

```

## Java Solution

```java

class Solution {
    public boolean rotateString(String A, String B) {
        if (A.length() != B.length())
            return false;
        return (A + A).contains(B);
    }
}

```

## Python Solution

```python

class Solution:
    def rotateString(self, A, B):
        """
        :type A: str
        :type B: str
        :rtype: bool
        """
        nA = len(A)
        nB = len(B)
        if nA != nB:
            return False
        if A == "":
            return True
        for i in range(nA):
            A = A[1:] + A[0]
            if A == B:
                return True
        return False

```





