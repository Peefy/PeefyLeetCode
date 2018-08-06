
# problem 283 : MoveZeroes

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/201-300/283.MoveZeroes/problem.png"/>

## C++ Solution

```c++

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j = 0;
        int n = nums.size();
        for(int i = 0; i < n; i++)
        {
            if (nums[i] != 0){
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
                ++j;
            }
        }   
    }
};

```

## C# Solution

```csharp

public class Solution {
    public void MoveZeroes(int[] nums) {
        int j = 0;
        int n = nums.Length;
        for(int i = 0; i < n; i++)
        {
            if (nums[i] != 0){
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
                ++j;
            }
        }
    }
}

```

## Java Solution

```java

class Solution {
    public void moveZeroes(int[] nums) {
        int j = 0;
        int n = nums.length;
        for(int i = 0; i < n; i++)
        {
            if (nums[i] != 0){
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
                ++j;
            }
        }
    }
}

```

## Python Solution

```python

class Solution:
    def moveZeroes(self, nums):
        """
        :type nums: List[int]
        :rtype: void Do not return anything, modify nums in-place instead.
        """
        n = len(nums)
        zeroindex = -1
        for i in range(n):
            if nums[i] == 0 and zeroindex == -1:
                zeroindex = i
            elif nums[i] != 0 and zeroindex != -1:
                nums[zeroindex] = nums[i]
                nums[i] = 0
                zeroindex += 1
        return nums

```




