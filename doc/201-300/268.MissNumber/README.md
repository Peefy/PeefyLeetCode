
# problem 268 : MissNumber

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/201-300/268.MissNumber/problem.png"/>

## C++ Solution

```c++

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int xor = 0 ;
        for(int i = 0; i<nums.size(); i++){
            xor = xor ^ i ^ nums[i];
        }
        return xor ^ nums.size();
    }
};

```

## C# Solution

```csharp

using System;
using System.Linq;

public class Solution {
    public int MissingNumber(int[] nums) {
        return nums.Length * (nums.Length + 1) / 2 - nums.Sum();
    }
}

```

## Java Solution

```java

class Solution {
    public int missingNumber(int[] nums) {
        int xor = 0 ;
        for(int i = 0; i<nums.length; i++){
            xor = xor ^ i ^ nums[i];
        }
        
        return xor ^ nums.length;
    }
}


```

## Python Solution

```python

class Solution:
    def missingNumber(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        n = len(nums)
        total = sum(nums)
        real = n * (n + 1) // 2
        return real - total

```




