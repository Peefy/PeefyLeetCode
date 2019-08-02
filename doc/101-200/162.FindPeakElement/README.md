
# problem 162 : FindPeakElement

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/101-200/162.FindPeakElement/problem.png"/>

## C++ Solution

```c++

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int l = 0, r = nums.size() - 1;
        while (l < r) {
            int mid = (l + r) / 2;
            if (nums[mid] > nums[mid + 1])
                r = mid;
            else
                l = mid + 1;
        }
        return l;
    }
};

```

## C# Solution

```csharp

public class Solution {
    public int FindPeakElement(int[] nums) {
        int l = 0, r = nums.Length - 1;
        while (l < r) {
            int mid = (l + r) / 2;
            if (nums[mid] > nums[mid + 1])
                r = mid;
            else
                l = mid + 1;
        }
        return l;
    }
}

```

## Java Solution

```java

public class Solution {
    public int findPeakElement(int[] nums) {
        int l = 0, r = nums.length - 1;
        while (l < r) {
            int mid = (l + r) / 2;
            if (nums[mid] > nums[mid + 1])
                r = mid;
            else
                l = mid + 1;
        }
        return l;
    }
}

```

## Python Solution

```python

class Solution:
    def findPeakElement(self, nums):
        l = 0
        right = len(nums) - 1
        while l < r:
            mid = (l + r) // 2
            if nums[mid] > nums[mid + 1]:
                r = mid
            else:
                l = mid + 1
        return l

```


