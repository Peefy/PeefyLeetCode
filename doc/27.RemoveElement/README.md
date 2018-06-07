
# problem 27 : Remove Element

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/27.RemoveElement/problem.png"/>

## C++ Solution

```c++

class Solution
{
  public:
    int removeElement(vector<int> &nums, int val)
    {
        auto count = 0;
        for (auto i = 0; i < nums.size(); ++i)
        {
            if (nums[i] != val){
                nums[count++] = nums[i];
            }
        }
        return count;
    }
};

```

## C# Solution

```csharp

    public class Solution
    {
        public int RemoveElement(int[] nums, int val)
        {
            var count = 0;
            for (var i = 0; i < nums.Length; ++i)
            {
                if (nums[i] != val)
                {
                    nums[count++] = nums[i];
                }
            }
            return count;
        }
    }

```

## Java Solution

```java

class Solution {
    public int removeElement(int[] nums, int val) {
        int count = 0;
        for (int i = 0; i < nums.length; ++i) {
            if (nums[i] != val) {
                nums[count++] = nums[i];
            }
        }
        return count;
    }
}

```

## Python Solution

```python

class Solution:
    def removeElement(self, nums, val):
        """
        :type nums: List[int]
        :type val: int
        :rtype: int
        """
        n = len(nums)
        count = 0
        for i in range(n):
            if nums[i] != val:
                nums[count] = nums[i]
                count += 1
        return count

```


