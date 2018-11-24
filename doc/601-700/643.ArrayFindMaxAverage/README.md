
# problem 643 : ArrayFindMaxAverage

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/601-700/643.ArrayFindMaxAverage/problem.png"/>

## C++ Solution

```c++

static int x = []() {
    ios::sync_with_stdio(false); 
    cin.tie(NULL);              
    return 0;
}();

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        int maxsum = 0;
        for (int i = 0; i < k; i++) {
            maxsum += nums[i];
        }
        int lastsum = maxsum;
        for (int i = k; i < n; i++){
            int nowsum = lastsum - nums[i - k] + nums[i];
            maxsum = max(nowsum, maxsum);
            lastsum = nowsum;
        }
        return maxsum / (double)k;
    }
};

```

## C# Solution

```csharp

public class Solution 
{
    public double FindMaxAverage(int[] nums, int k) 
    {
        int n = nums.Length;
        int maxsum = 0;
        for (int i = 0; i < k; i++) {
            maxsum += nums[i];
        }
        int lastsum = maxsum;
        for (int i = k; i < n; i++){
            int nowsum = lastsum - nums[i - k] + nums[i];
            maxsum = Math.Max(nowsum, maxsum);
            lastsum = nowsum;
        }
        return maxsum / (double)k;
    }
}

```

## Java Solution

```java

class Solution {
    public double findMaxAverage(int[] nums, int k) {
        int n = nums.length;
        int maxsum = 0;
        for (int i = 0; i < k; i++) {
            maxsum += nums[i];
        }
        int lastsum = maxsum;
        for (int i = k; i < n; i++){
            int nowsum = lastsum - nums[i - k] + nums[i];
            maxsum = Math.max(nowsum, maxsum);
            lastsum = nowsum;
        }
        return maxsum / (double)k;
    }
}

```

## Python Solution

```python

class Solution:
    def findMaxAverage(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: float
        """
        n = len(nums)
        maxsum = sum(nums[0:k])
        lastsum = maxsum
        for i in range(k, n):
            nowsum = lastsum - nums[i - k] + nums[i]
            lastsum, maxsum = nowsum, max(nowsum, maxsum)
        return maxsum / k

```





