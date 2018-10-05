
# problem 453 : MinMoves

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/401-500/453.MinMoves/problem.png"/>

## C++ Solution

```c++

class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n = nums.size();
        int min = 2147483647;
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += nums[i];
            if (nums[i] < min)
                min = nums[i];
        }
        return sum - min * n;
    }
};

```

## C# Solution

```csharp

public class Solution {
    public int MinMoves(int[] nums) {
        int n = nums.Length;
        int min = 2147483647;
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += nums[i];
            if (nums[i] < min)
                min = nums[i];
        }
        return sum - min * n;
    }
}

```

## Java Solution

```java

class Solution {
    public int minMoves(int[] nums) {
        int n = nums.length;
        int min = Integer.MAX_VALUE;
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += nums[i];
            if (nums[i] < min)
                min = nums[i];
        }
        return sum - min * n;
    }
}

```

## Python Solution

```python

class Solution:
    def minMoves(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        return sum(nums) - min(nums) * len(nums)

```





