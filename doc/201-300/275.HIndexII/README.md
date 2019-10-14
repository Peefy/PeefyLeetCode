
# problem 275 : HIndexII

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/201-300/275.HIndexII/problem.png"/>

## C++ Solution

```c++

class Solution {
public:
    int hIndex(vector<int>& citations) {
        int n = citations.size();
        if (n == 0 || citations[n - 1] == 0)
            return 0;
        int left = 0;
        int right = n - 1;
        while (left < right) {
            int mid = (left + right) >> 1;
            if (citations[mid] < n - mid)
                left = mid + 1;
            else
                right = mid;
        }
        return n - left;
    }
};

```

## C# Solution

```csharp

public class Solution {
    public int HIndex(int[] citations) {
        int n = citations.Length;
        if (n == 0 || citations[n - 1] == 0)
            return 0;
        int left = 0;
        int right = n - 1;
        while (left < right) {
            int mid = (left + right) >> 1;
            if (citations[mid] < n - mid)
                left = mid + 1;
            else
                right = mid;
        }
        return n - left;
    }
}

```

## Java Solution

```java

class Solution {
    public int hIndex(int[] citations) {
        int n = citations.length;
        if (n == 0 || citations[n - 1] == 0)
            return 0;
        int left = 0;
        int right = n - 1;
        while (left < right) {
            int mid = (left + right) >>> 1;
            if (citations[mid] < n - mid)
                left = mid + 1;
            else
                right = mid;
        }
        return n - left;
    }
}

```

## Python Solution

```python

class Solution:
    def hIndex(self, citations):
        # sorted-array binary find 
        n = len(citations)
        if n == 0 or citations[-1] == 0:
            return 0
        left = 0
        right = n - 1
        while left < right:
            mid = left + (right - left) // 2
            if citations[mid] < n - mid:
                left = mid + 1
            else:
                right = mid
        return n - left     

```




