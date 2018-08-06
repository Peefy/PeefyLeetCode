
# problem 278 : FirstBadVersion

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/201-300/278.FirstBadVersion/problem.png"/>

## C++ Solution

```c++

class Solution {
public:
    int firstBadVersion(int n) {
        int left = 1;
        int right = n;
        while (left <= right) {
            int middle = (left + right) / 2;
            if (isBadVersion(middle) == true) {
                right = middle - 1;
            } else {
                left = middle + 1;
            }
        }
        return left;
    }
};

```

## C# Solution

```csharp

public class Solution : VersionControl {
    public int FirstBadVersion(int n) {
                int left = 1;
        int right = n;
        while (left <= right) {
            int middle = (left + right) / 2;
            if (IsBadVersion(middle) == true) {
                right = middle - 1;
            } else {
                left = middle + 1;
            }
        }
        return left;
    }
}

```

## Java Solution

```java

public class Solution extends VersionControl {
    public int firstBadVersion(int n) {
        int left = 1;
        int right = n;
        while (left <= right) {
            int middle = (left + right) / 2;
            if (isBadVersion(middle) == true) {
                right = middle - 1;
            } else {
                left = middle + 1;
            }
        }
        return left;
    }
}

```

## Python Solution

```python

class Solution:
    def firstBadVersion(self, n):
        """
        :type n: int
        :rtype: int
        """
        left = 1
        right = n
        while left <= right:
            middle = (left + right) // 2
            if isBadVersion(middle) == True:
                right = middle - 1
            else:
                left = middle + 1
        return left

```




