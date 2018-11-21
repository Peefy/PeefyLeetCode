
# problem 628 : Maximum Product

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/601-700/628.MaximumProduct/problem.png"/>

## C++ Solution

```c++

static int x = []() {
    ios::sync_with_stdio(false); 
    cin.tie(NULL);              
    return 0;
}();

class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int max_1 = -1000;
        int max_2 = -1000;
        int max_3 = -1000;
        int min_1 = 1000;
        int min_2 = 1000;
        for (int num : nums) {
            if (num > max_1){
                max_3 = max_2;
                max_2 = max_1;
                max_1 = num;
            }
            else if (num > max_2){
                max_3 = max_2;
                max_2 = num;
            }
            else if (num > max_3)
                max_3 = num;
            if (num < min_1){
                min_2 = min_1;
                min_1 = num;
            }
            else if (num < min_2)
                min_2 = num;
        }
        return max(max_1 * max_2 * max_3, max_1 * min_1 * min_2);
    }
};

```

## C# Solution

```csharp

public class Solution 
{
    public int MaximumProduct(int[] nums) 
    {
        int max_1 = -1000;
        int max_2 = -1000;
        int max_3 = -1000;
        int min_1 = 1000;
        int min_2 = 1000;
        foreach (int num in nums) {
            if (num > max_1){
                max_3 = max_2;
                max_2 = max_1;
                max_1 = num;
            }
            else if (num > max_2){
                max_3 = max_2;
                max_2 = num;
            }
            else if (num > max_3)
                max_3 = num;
            if (num < min_1){
                min_2 = min_1;
                min_1 = num;
            }
            else if (num < min_2)
                min_2 = num;
        }
        return Math.Max(max_1 * max_2 * max_3, max_1 * min_1 * min_2);
    }
}

```

## Java Solution

```java

class Solution {
    public int maximumProduct(int[] nums) {
        int max_1 = -Integer.MAX_VALUE;
        int max_2 = -Integer.MAX_VALUE;
        int max_3 = -Integer.MAX_VALUE;
        int min_1 = Integer.MAX_VALUE;
        int min_2 = Integer.MAX_VALUE;
        for (int num : nums) {
            if (num > max_1){
                max_3 = max_2;
                max_2 = max_1;
                max_1 = num;
            }
            else if (num > max_2){
                max_3 = max_2;
                max_2 = num;
            }
            else if (num > max_3)
                max_3 = num;
            if (num < min_1){
                min_2 = min_1;
                min_1 = num;
            }
            else if (num < min_2)
                min_2 = num;
        }
        return Math.max(max_1 * max_2 * max_3, max_1 * min_1 * min_2);
    }
}

```

## Python Solution

```python

class Solution:
    def maximumProduct(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        nums.sort()
        return max(nums[-1] * nums[-2] * nums[-3], \
            nums[0] * nums[1] * nums[-1])

```





