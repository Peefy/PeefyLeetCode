
# problem 152 : MaximumProductSubarray

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/101-200/152.MaximumProductSubarray/problem.png"/>

## C++ Solution

```c++

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        if(nums.empty()) 
            return 0;
        int i, ret, pos, neg, temp;
        pos = nums[0];
        neg = nums[0];
        ret = nums[0];
        for(i = 1; i < nums.size(); i++){
            temp = pos;
            pos = max(nums[i], max(pos * nums[i], neg * nums[i]));
            neg = min(nums[i], min(temp * nums[i], neg * nums[i]));
            ret = max(pos, ret);
        }
        return ret;
    }
};

```

## C# Solution

```csharp

public class Solution {
    public int MaxProduct(int[] nums) {
        int max = nums[0], min = nums[0], res = nums[0];
        for(int i = 1; i < nums.Length; i++){
            if(nums[i] < 0){
                int tmp = max;
                max = min;
                min = tmp;
            }
            max = Math.Max(nums[i], max * nums[i]);
            min = Math.Min(nums[i], min * nums[i]);
            res = Math.Max(max, res);
        }
        return res;
    }
}

```

## Java Solution

```java

class Solution {
    public int maxProduct(int[] nums) {
        int max = nums[0], min = nums[0], res = nums[0];
        for(int i = 1; i < nums.length; i++){
            if(nums[i] < 0){
                int tmp = max;
                max = min;
                min = tmp;
            }
            max = Math.max(nums[i], max * nums[i]);
            min = Math.min(nums[i], min * nums[i]);
            res = Math.max(max, res);
        }
        return res;
    }
}

```

## Python Solution

```python

class Solution:
    def maxProduct(self, nums: List[int]) -> int:
        mi = ma = res = nums[0]
        for i in range(1, len(nums)):
            if nums[i] < 0: mi, ma = ma, mi
            ma = max(ma * nums[i], nums[i])
            mi = min(mi * nums[i], nums[i])
            res = max(res, ma)
        return res 

```


