
# Problem 75 : SortColors

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/1-100/75.SortColors/problem.png"/>

## C++ Solution

```c++

class Solution {
  public:
  /*
  荷兰三色旗问题解
  */
  void sortColors(vector<int>& nums) {
    // 对于所有 idx < p0 : nums[idx < p0] = 0
    // curr 是当前考虑元素的下标
    int p0 = 0, curr = 0;
    // 对于所有 idx > p2 : nums[idx > p2] = 2
    int p2 = nums.size() - 1;

    while (curr <= p2) {
      if (nums[curr] == 0) {
        swap(nums[curr++], nums[p0++]);
      }
      else if (nums[curr] == 2) {
        swap(nums[curr], nums[p2--]);
      }
      else curr++;
    }
  }
};

```

## C# Solution

```csharp

public class Solution {
    public void SortColors(int[] nums) {
        int p0 = 0, curr = 0;
        int p2 = nums.Length - 1;
        int tmp;
        while (curr <= p2) {
            if (nums[curr] == 0) {
                tmp = nums[p0];
                nums[p0++] = nums[curr];
                nums[curr++] = tmp;
            } else if (nums[curr] == 2) {
                tmp = nums[curr];
                nums[curr] = nums[p2];
                nums[p2--] = tmp;
            } else
                curr++;
        }
    }
}

```

## Java Solution

```java

class Solution {
    /*
     * 荷兰三色旗问题解
     */
    public void sortColors(int[] nums) {
        int p0 = 0, curr = 0;
        int p2 = nums.length - 1;
        int tmp;
        while (curr <= p2) {
            if (nums[curr] == 0) {
                tmp = nums[p0];
                nums[p0++] = nums[curr];
                nums[curr++] = tmp;
            } else if (nums[curr] == 2) {
                tmp = nums[curr];
                nums[curr] = nums[p2];
                nums[p2--] = tmp;
            } else
                curr++;
        }
    }
}

```

## Python Solution

```python

class Solution:
    def sortColors(self, nums: list) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        nums.sort()
        return nums

```


