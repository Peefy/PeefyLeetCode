
# Problem 31 : NextPermutation

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/1-100/31.NextPermutation/problem.png"/>

## C++ Solution

```c++



```

## C# Solution

```csharp



```

## Java Solution

```java



```

## Python Solution

```python

class Solution:
    def reverse(self, nums, l, r):
        while l < r:
            tmp = nums[l]
            nums[l] = nums[r]
            nums[r] = tmp
            l += 1
            r -= 1

    def nextPermutation(self, nums):
        """
        :type nums: List[int]
        :rtype: void Do not return anything, modify nums in-place instead.
        """
        nlen = len(nums)
        i = nlen - 1
        while i > 0 and nums[i] <= nums[i - 1]:
            i -= 1
        if i == 0:
            self.reverse(nums, 0, nlen - 1)
            return
        d1 = i - 1
        i = nlen - 1
        while nums[i] <= nums[d1]:
            i -= 1
        d2 = i
        nums[d1], nums[d2] = nums[d2], nums[d1]
        self.reverse(nums, d1 + 1, nlen - 1)
        return

```


