
# problem 198 : Rob

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/198.Rob/problem.png"/>


## C++ Solution

```c++

class Solution {
public:
    int rob(vector<int>& nums) {
        int a = 0;
        int b = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (i % 2 == 0)
                a = max(a + nums[i], b);
            else
                b = max(a, b + nums[i]);
        }
        return max(a, b);
    }
};

```

## C# Solution

```csharp

public class Solution {
    public int Rob(int[] nums) {
        int n = nums.Length;
        if (n == 0)
            return 0;
        if (n == 1)
            return nums[0];
        if (n == 2)
            return Math.Max(nums[0], nums[1]);
        int[] prices = new int[n];
        prices[0] = nums[0];
        prices[1] = Math.Max(nums[0], nums[1]);
        for (int i = 2; i < n; i++) {
            prices[i] = Math.Max(nums[i] + prices[i - 2], prices[i - 1]);
        } 
        return prices[n - 1];
    }
}

```

## Java Solution

```java

class Solution {
    public int rob(int[] nums) {
        int n = nums.length;
        if (n == 0)
            return 0;
        if (n == 1)
            return nums[0];
        if (n == 2)
            return Math.max(nums[0], nums[1]);
        int[] prices = new int[n];
        prices[0] = nums[0];
        prices[1] = Math.max(nums[0], nums[1]);
        for (int i = 2; i < n; i++) {
            prices[i] = Math.max(nums[i] + prices[i - 2], prices[i - 1]);
        } 
        return prices[n - 1];
    }
}

```

## Python Solution

```python

class Solution:
    def rob(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        n = len(nums)
        price = 0
        lastprice = 0
        lastlastprice = 0
        robindex = 0
        for i in range(n):
            if nums[i] + lastlastprice >= lastprice:
                robindex = i
                if i - robindex < 2:
                    price -= lastprice
                price += nums[i] 
                price += lastlastprice
            if i - robindex >= 2:
                price += nums[i]
                robindex = i
            lastlastprice = lastprice
            lastprice = price
        return price

```




