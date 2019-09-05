
# problem 213 : HouseRobberII

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/201-300/213.HouseRobberII/problem.png"/>

## C++ Solution

```c++

class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        if (n == 1)
            return nums[0];
        vector<int> dpa = vector<int>(n + 1, 0);
        vector<int> dpb = vector<int>(n + 1, 0);
        for (int i = 2; i < n + 1; i++) {
            dpa[i] = max(dpa[i - 1], dpa[i - 2] + nums[i - 2]);
            dpb[i] = max(dpb[i - 1], dpb[i - 2] + nums[i - 1]);
        }
        return max(dpa[n], dpb[n]);
    }
};

```

## C# Solution

```csharp

public class Solution {
    public int Rob(int[] nums) {
        int n = nums.Length;
        if (n == 1)
            return nums[0];
        int[] dpa = new int[n + 1];
        int[] dpb = new int[n + 1];
        for (int i = 2; i < n + 1; i++) {
            dpa[i] = Math.Max(dpa[i - 1], dpa[i - 2] + nums[i - 2]);
            dpb[i] = Math.Max(dpb[i - 1], dpb[i - 2] + nums[i - 1]);
        }
        return Math.Max(dpa[n], dpb[n]);
    }
}

```

## Java Solution

```java

class Solution {
    public int rob(int[] nums) {
        int n = nums.length;
        if (n == 1)
            return nums[0];
        int[] dpa = new int[n + 1];
        int[] dpb = new int[n + 1];
        for (int i = 2; i < n + 1; i++) {
            dpa[i] = Math.max(dpa[i - 1], dpa[i - 2] + nums[i - 2]);
            dpb[i] = Math.max(dpb[i - 1], dpb[i - 2] + nums[i - 1]);
        }
        return Math.max(dpa[n], dpb[n]);
    }
}

```

## Python Solution

```python

class Solution:
    def rob(self, nums):
        n = len(nums)
        if n == 1:
            return nums[0]
        dpa = [0] * (n + 1)
        dpb = [0] * (n + 1)
        for i in range(2, n + 1):
            dpa[i] = max(dpa[i - 1], dpa[i - 2] + nums[i - 2])
            dpb[i] = max(dpb[i - 1], dpb[i - 2] + nums[i - 1])
        return max(dpa[n], dpb[n])

```




