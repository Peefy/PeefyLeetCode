
# problem 189 RotateArray

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/189.RotateArray/problem.png"/>

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

from copy import deepcopy

class Solution:
    def rotate(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: void Do not return anything, modify nums in-place instead.
        """
        arr = deepcopy(nums)
        n = len(nums)
        k = k % n
        if k == 0:
            return
        for i in range(n):
            index = i + k
            if index >= n:
                index -= n
            nums[index] = arr[i]  

```



