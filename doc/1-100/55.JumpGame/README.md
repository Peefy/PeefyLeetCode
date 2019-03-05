
# Problem 55 : JumpGame

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/1-100/55.JumpGame/problem.png"/>

贪心算法

## C++ Solution

```c++

static int x = []() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    bool canJump(vector<int>& nums) {
        int i = nums.size() - 1;
        for(int j = nums.size() - 2; j > -1; j--){
            if (i - j <= nums[j])
                i = j;
        }
        return i == 0;
    }
};

```

## C# Solution

```csharp

public class Solution {
    public bool CanJump(int[] nums) {
        int i = nums.Length - 1;
        for(int j = nums.Length - 2; j > -1; j--){
            if (i - j <= nums[j])
                i = j;
        }
        return i == 0;
    }
}

```

## Java Solution

```java

class Solution {
    public boolean canJump(int[] nums) {
        int i = nums.length - 1;
        for(int j = nums.length - 2; j > -1; j--){
            if (i - j <= nums[j])
                i = j;
        }
        return i == 0;
    }
}

```

## Python Solution

```python

class Solution:
    def canJump(self, nums):
        nums = nums[::-1]
        res = 0
        for i in range(1, len(nums)):
            if nums[i] >= i - res:
                res = i
        return res == len(nums) - 1

```


