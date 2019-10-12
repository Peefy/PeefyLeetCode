
# problem 274 : HIndex

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/201-300/274.HIndex/problem.png"/>

## C++ Solution

```c++

class Solution {
public:
    int hIndex(vector<int>& citations) {
        int n = citations.size();
        vector<int> bucket(n + 1, 0); 
        for (int c : citations) {
            if (c >= n)
                bucket[n] += 1;
            else
                bucket[c] += 1;
        }
        int cur = 0;
        for (int i = n; i > 0; i--) {
            cur += bucket[i];
            if (cur >= i)
                return i;
        }
        return 0;
    }
};

```

## C# Solution

```csharp

public class Solution {
    public int HIndex(int[] citations) {
        int n = citations.Length;
        int[] bucket = new int[n + 1];
        foreach (int c in citations) {
            if (c >= n)
                bucket[n] += 1;
            else
                bucket[c] += 1;
        }
        int cur = 0;
        for (int i = n; i > 0; i--) {
            cur += bucket[i];
            if (cur >= i)
                return i;
        }
        return 0;
    }
}

```

## Java Solution

```java

class Solution {
    public int hIndex(int[] citations) {
        int n = citations.length;
        int[] bucket = new int[n + 1];
        for (int c : citations) {
            if (c >= n)
                bucket[n] += 1;
            else
                bucket[c] += 1;
        }
        int cur = 0;
        for (int i = n; i > 0; i--) {
            cur += bucket[i];
            if (cur >= i)
                return i;
        }
        return 0;
    }
}

```

## Python Solution

```python

class Solution:
    def hIndex(self, citations: List[int]) -> int:
        n = len(citations)
        bucket = [0] * (n + 1)
        for citation in citations:
            if citation >= n:
                bucket[n] += 1
            else:
                bucket[citation] += 1
        cur = 0
        for i in range(n, -1, -1):
            cur += bucket[i]
            if cur >= i:
                return i     

```




