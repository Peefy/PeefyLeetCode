
# problem 303 : RangeSumQueryImmutable

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/301-400/303.RangeSumQueryImmutable/problem.png"/>

## 动态规划(DP)的思想

## C++ Solution

```c++


class NumArray {
public:
    NumArray(vector<int> nums) {
        int n = nums.size();
        if (n == 0) {
            return;
        }
        arr.push_back(nums[0]);
        for (int i = 1; i < n; i++) {
            arr.push_back(arr[i - 1] + nums[i]);
        }
    }
    
    int sumRange(int i, int j) {
        if (i == 0) {
            return arr[j];
        } else {
            return arr[j] - arr[i - 1];
        }
    }
private:
    vector<int> arr;
};

```

## C# Solution

```csharp

public class NumArray {

    int[] arr;
    public NumArray(int[] nums) {
        int n = nums.Length;
        if (n == 0) {
            return;
        }
        arr = new int[n];
        arr[0] = nums[0];
        for (int i = 1; i < n; i++) {
            arr[i] = arr[i - 1] + nums[i];
        }
    }
    
    public int SumRange(int i, int j) {
        if (i == 0) {
            return arr[j];
        } else {
            return arr[j] - arr[i - 1];
        }
    }
}

```

## Java Solution

```java

class NumArray {

    int[] arr;
    public NumArray(int[] nums) {
        int n = nums.length;
        if (n == 0) {
            return;
        }
        arr = new int[n];
        arr[0] = nums[0];
        for (int i = 1; i < n; i++) {
            arr[i] = arr[i - 1] + nums[i];
        }
    }
    
    public int sumRange(int i, int j) {
        if (i == 0) {
            return arr[j];
        } else {
            return arr[j] - arr[i - 1];
        }
    }
}

```

## Python Solution

```python

class NumArray:

    def __init__(self, nums):
        """
        :type nums: List[int]
        """
        n = len(nums)
        self.arr = []
        if n == 0:
            return
        self.arr.append(nums[0])
        for i in range(1, n):
            self.arr.append(self.arr[i - 1] + nums[i])

    def sumRange(self, i, j):
        """
        :type i: int
        :type j: int
        :rtype: int
        """
        if i == 0:
            return self.arr[j]
        return self.arr[j] - self.arr[i - 1]

```



