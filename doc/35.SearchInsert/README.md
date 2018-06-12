
# problem 35 : SearchInsert

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/35.SearchInsert/problem.png"/>

## C++ Solution

```c++

class Solution
{
  public:
    int searchInsert(vector<int> &nums, int target)
    {
        int ans = -1;
        for (int i = 0; i < nums.size(); i++)
        {
            if (target <= nums[i])
            {
                ans = i;
                break;
            }
        }
        ans = ans == -1 ? nums.size() : ans;
        return ans;
    }
};

```

## C# Solution

```csharp

public class Solution
    {
        public int SearchInsert(int[] nums, int target)
        {
            var n = nums.Length;
            if (n == 0)
            {
                return 0;
            }
            var i = 0;
            var j = n - 1;
            var mid = 0;
            while (i <= j)
            {
                mid = (j + i) / 2;
                if (nums[mid] < target)
                    i = mid + 1;
                if (nums[mid] > target)
                    j = mid - 1;
                if (target == nums[mid])
                    return mid;
            }
            return i;
        }
    }

```

## Java Solution

```java

public class Solution {
    public int searchInsert(int[] nums, int target) {
        int n = nums.length;
        if (n == 0){
            return 0;
        }
        int i = 0;
        int j = n - 1;
        int mid = 0;
        while (i <= j) {
            mid = (j + i) / 2;
            if (nums[mid] < target)
                i = mid + 1;
            if (nums[mid] > target)
                j = mid - 1;
            if (target == nums[mid])
                return mid;
        }
        return i;
    }
}

```

## Python Solution

```python

class Solution:
    def searchInsert(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: int
        """
        n = len(nums)
        left = 0
        right = n - 1
        if target > nums[right]:
            return right + 1
        while left < right:
            middle = (left + right) // 2
            if nums[middle] == target:
                return middle
            elif nums[middle] < target:
                left = middle + 1
            else:
                right = middle - 1
        if target > nums[left]:
            return left + 1
        return left

```


