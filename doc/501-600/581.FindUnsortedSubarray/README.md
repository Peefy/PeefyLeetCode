
# problem 581 ： FindUnsortedSubarray

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/501-600/581.FindUnsortedSubarray/problem.png"/>

## C++ Solution

```c++

static int pr = []() {
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution
{
  public:
    int findUnsortedSubarray(vector<int> &nums){
        int n = nums.size();
        int start = -1;
        int end = -2;
        int minval = nums[n - 1];
        int maxval = nums[0];
        for (int i = 0, pos = 0; i < n; i++){
            pos = n - 1 - i;
            maxval = max(maxval, nums[i]);
            minval = min(minval, nums[pos]);
            if (nums[i] < maxval)
                end = i;
            if (nums[pos] > minval)
                start = pos;
        }
        return end - start + 1;
    }
};

```

## C# Solution

```csharp

    public class Solution
    {
        public int FindUnsortedSubarray(int[] nums)
        {
            int n = nums.Length;
            int left = 0;
            int right = n - 1;
            while (left < n - 1 && nums[left] <= nums[left + 1])
                left += 1;
            if (left == n - 1)
                return 0;
            while (right > 0 && nums[right] >= nums[right - 1])
                right -= 1;
            int min_value = int.MaxValue;
            int max_value = int.MinValue;
            for (int i = left; i < right + 1; i++)
            {
                min_value = Math.Min(nums[i], min_value);
                max_value = Math.Max(nums[i], max_value);
            }
            while (left > -1 && nums[left] > min_value)
                left -= 1;
            while (right < n && nums[right] < max_value)
                right += 1;
            return right - left - 1;
        }
    }

```

## Java Solution

```java

class Solution {
    public int findUnsortedSubarray(int[] nums) {
        int n = nums.length;
        int left = 0;
        int right = n - 1;
        while (left < n - 1 && nums[left] <= nums[left + 1])
            left += 1;
        if (left == n - 1)
            return 0;
        while (right > 0 && nums[right] >= nums[right - 1])
            right -= 1;
        int min_value = Integer.MAX_VALUE;
        int max_value = Integer.MIN_VALUE;
        for (int i = left; i < right + 1; i++) {
            min_value = Math.min(nums[i], min_value);
            max_value = Math.max(nums[i], max_value);
        }
        while (left > -1 && nums[left] > min_value)
            left -= 1;
        while (right < n && nums[right] < max_value)
            right += 1;
        return right - left - 1;
    }
}

```

## Python Solution

```python

class Solution:
    def findUnsortedSubarray(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        numssort = sorted(nums)
        n = len(nums)
        start = 1
        end = 0
        for i in range(n):
            if nums[i] != numssort[i]:
                start = i
                break
        for i in range(n):
            j = n - i - 1
            if nums[j] != numssort[j]:
                end = j
                break
        return end - start + 1

```





