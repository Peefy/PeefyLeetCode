
# problem 209 : MinimumSizeSubarraySum

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/201-300/209.MinimumSizeSubarraySum/problem.png"/>

## C++ Solution

```c++

class Solution {
public:
    int minSubArrayLen(int s, vector<int>& nums) {
            int n = nums.size();
    int ans = INT_MAX;
    int left = 0;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += nums[i];
        while (sum >= s) {
            ans = min(ans, i + 1 - left);
            sum -= nums[left++];
        }
    }
    return (ans != INT_MAX) ? ans : 0;
    }
};

```

## C# Solution

```csharp

public class Solution {
    public int MinSubArrayLen(int s, int[] nums) {
        int n = nums.Length;
        int ans = int.MaxValue;
        int left = 0;
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += nums[i];
            while (sum >= s) {
                ans = Math.Min(ans, i + 1 - left);
                sum -= nums[left++];
            }
        }
        return (ans != int.MaxValue) ? ans : 0;
    }
}

```

## Java Solution

```java

class Solution {
    public int minSubArrayLen(int s, int[] nums) {
        int n = nums.length;
        int ans = Integer.MAX_VALUE;
        int left = 0;
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += nums[i];
            while (sum >= s) {
                ans = Math.min(ans, i + 1 - left);
                sum -= nums[left++];
            }
        }
        return (ans != Integer.MAX_VALUE) ? ans : 0;
    }
}

```

## Python Solution

```python

class Solution:
    def minSubArrayLen(self, s, nums):
        n = len(nums)
        ans = 9999999999
        left = 0
        sum = 0
        for i in range(n):
            sum += nums[i]
            while sum >= s:
                ans = min(ans, i + 1 - left)
                sum -= nums[left]
                left += 1
        return ans if ans != 9999999999 else 0    

```




