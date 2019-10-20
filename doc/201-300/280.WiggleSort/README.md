
# problem 280 : WiggleSort

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/201-300/280.WiggleSort/problem.png"/>

## C++ Solution

```c++

class Solution {
public:
    void wiggleSort(vector<int> nums) {
        for (int i = 1; i < nums.size(); ++i) {
            if ((i % 2 == 0 && nums[i - 1] < nums[i]) || 
                (i % 2 == 1 && nums[i - 1] > nums[i])) {
                swap(nums[i - 1], nums[i]);
            }       
        }
    }
};

```

## C# Solution

```csharp

public class Solution {
    public void WiggleSort(int[] nums) {
        for (int i = 1; i < nums.Length; ++i) {
            if ((i % 2 == 0 && nums[i - 1] < nums[i]) || 
                (i % 2 == 1 && nums[i - 1] > nums[i])) {
                var temp = nums[i - 1];
                nums[i - 1] = temp;
                nums[i] = nums[i - 1];
            }       
        }
    }
}

```

## Java Solution

```java

class Solution {
    public void wiggleSort(int[] nums) {
        for (int i = 1; i < nums.length; ++i) {
            if ((i % 2 == 0 && nums[i - 1] < nums[i]) || 
                (i % 2 == 1 && nums[i - 1] > nums[i])) {
                int temp = nums[i - 1];
                nums[i - 1] = temp;
                nums[i] = nums[i - 1];
            }       
        }
    }
}

```

## Python Solution

```python

class Solution:
    def wiggleSort(self, nums):
        for i in range(1, len(nums)):
            if i % 2 == 1 and nums[i] < nums[i - 1] or \
                i % 2 == 0 and nums[i] > nums[i - 1]:
                nums[i], nums[i - 1] = nums[i - 1], nums[i]
        return nums 

```




