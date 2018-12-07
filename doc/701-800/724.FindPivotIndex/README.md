
# problem 724 : FindPivotIndex

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/701-800/724.FindPivotIndex/problem.png"/>

## C++ Solution

```c++

static int pr = []() {
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int total = 0;
        int n = nums.size();
        int suml = 0;
        for (int i = 0; i < n; i++) {
            total += nums[i];
        }
        for (int i = 0; i < n; i++) {
            if ((suml << 1) + nums[i] != total)
                suml += nums[i];
            else
                return i;
        }
        return -1;
    }
};

```

## C# Solution

```csharp

    public class Solution
    {
        public int PivotIndex(int[] nums)
        {
            if (nums.Length == 1)
                return 0;
            int right = 0;
            foreach (var i in nums)
            {
                right += i;
            }
            int left = 0;
            for (int i = 0; i < nums.Length; ++i)
            {
                left += nums[i];
                if (right == left)
                    return i;
                right -= nums[i];
            }
            return -1;
        }
    }

```

## Java Solution

```java

class Solution {
    public int pivotIndex(int[] nums) {
        int total = 0;
        int n = nums.length;
        int suml = 0;
        for (int i = 0; i < n; i++) {
            total += nums[i];
        }
        for (int i = 0; i < n; i++) {
            if ((suml << 1) + nums[i] != total)
                suml += nums[i];
            else
                return i;
        }
        return -1;
    }
}


```

## Python Solution

```python

class Solution:
    def pivotIndex(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        n = len(nums)
        if n == 0:
            return -1
        leftsum = 0
        rightsum = sum(nums)
        for i in range(n):
            leftsum += nums[i]
            if leftsum == rightsum:
                return i 
            rightsum -= nums[i]
        return -1

```





