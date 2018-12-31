
# problem 908 : SmallestRangeI

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/901-1000/908.SmallestRangeI/problem.png"/>

## C++ Solution

```c++

static int x = []() {
    ios::sync_with_stdio(false); 
    cin.tie(NULL);              
    return 0;
}();

class Solution {
public:
    int smallestRangeI(vector<int>& A, int K) {
        int maxv = 0;
        int minv = 10000;
        for (int a : A){
            maxv = max(a, maxv);
            minv = min(a, minv);
        }
        return max(0, maxv - minv - 2 * K);
    }
};

```

## C# Solution

```csharp

public class Solution {
    public int SmallestRangeI(int[] A, int K) {
        int maxv = 0;
        int minv = 10000;
        foreach (int a in A){
            maxv = Math.Max(a, maxv);
            minv = Math.Min(a, minv);
        }
        return Math.Max(0, maxv - minv - 2 * K);
    }
}

```

## Java Solution

```java

class Solution {
    public int smallestRangeI(int[] A, int K) {
        int maxv = 0;
        int minv = 10000;
        for (int a : A){
            maxv = Math.max(a, maxv);
            minv = Math.min(a, minv);
        }
        return Math.max(0, maxv - minv - 2 * K);
    }
}

```

## Python Solution

```python

class Solution:
    def smallestRangeI(self, A, K):
        """
        :type A: List[int]
        :type K: int
        :rtype: int
        """
        return max(max(A) - min(A) - 2 * K, 0)

```





