
# problem 53 : MaxSubArray

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/53.MaxSubArray/problem.png"/>

## C++ Solution

```c++

class Solution
{
  public:
    int maxSubArray(vector<int> &nums)
    {
        auto sum = 0;
        auto max = nums[0];
        for (auto& num : nums){
            if (sum < 0)
                sum = 0;
            sum += num;
            if (sum > max)
                max = sum;
        }
        return max;
    }
};

```

## C# Solution

```csharp

    public class Solution
    {
        public int MaxSubArray(int[] nums)
        {
            var sum = 0;
            var max = int.MinValue;
            for (var i = 0; i < nums.Length; ++i)
            {
                if (sum < 0)
                    sum = 0;
                sum += nums[i];
                if (sum > max)
                    max = sum;
            }
            return max;
        }
    }


```

## Java Solution

```java

public class Solution {
    public int maxSubArray(int[] nums) {
        double globalMax = nums[0];
        double localMax = 0;
        for(int i = 0 ; i < nums.length; i++)
        {
            localMax = Math.max(nums[i],localMax+nums[i]);
            globalMax = Math.max(globalMax,localMax);
        }
        return (int)globalMax;
    }
}

```

## Python Solution

```python

class Solution:
    def maxSubArray(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """ 
        # 找到最优子序列的起点就可以了
        max_sum = 0
        sum = 0
        n = len(nums)
        val = max(nums)
        if val <= 0:
            return val
        for i in range(n):
            sum += nums[i]
            if sum > max_sum:
                max_sum = sum
            elif sum < 0:
                sum = 0
        return max_sum

```


