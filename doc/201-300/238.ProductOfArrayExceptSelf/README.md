
# problem 238 : ProductOfArrayExceptSelf

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/201-300/238.ProductOfArrayExceptSelf/problem.png"/>

## C++ Solution

```c++

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        auto n = nums.size();
        auto left = 1;
        auto right = 1;
        vector<int> res(n, 1); 
        for (size_t i = 0; i < n; i++){
            res[i] *= left;
            left *= nums[i];
            res[n - 1 - i] *= right;
            right *= nums[n - 1 - i];
        }
        return res;
    }
};

```

## C# Solution

```csharp

public class Solution {
    public int[] ProductExceptSelf(int[] nums) {
        int[] res = new int[nums.Length];
        int p = 1, q = 1;
        for (int i = 0; i < nums.Length; i++) {
            res[i] = p;
            p *= nums[i];
        }
        for (int i = nums.Length - 1; i > 0 ; i--) {
            q *= nums[i];
            res[i - 1] *= q;
        }
        return res;
    }
}

```

## Java Solution

```java

class Solution {
    public int[] productExceptSelf(int[] nums) {
        int[] res = new int[nums.length];
        int p = 1, q = 1;
        for (int i = 0; i < nums.length; i++) {
            res[i] = p;
            p *= nums[i];
        }
        for (int i = nums.length - 1; i > 0 ; i--) {
            q *= nums[i];
            res[i - 1] *= q;
        }
        return res;
    }
}

```

## Python Solution

```python

class Solution:
    def productExceptSelf(self, nums):
        n = len(nums)
        left = 1
        right = 1
        res = [1] * n
        for i in range(n):
            res[i] *= left
            left *= nums[i]
            res[n - 1 - i] *= right
            right *= nums[n - 1 - i]
        return res    

```




