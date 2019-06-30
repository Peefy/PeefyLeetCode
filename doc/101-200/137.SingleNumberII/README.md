
# problem 137 : SingleNumberII

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/101-200/137.SingleNumberII/problem.png"/>

## C++ Solution

```c++

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int b1 = 0, b2 = 0;
        for (int n : nums){
            b1 = (b1 ^ n) & ~ b2; 
            b2 = (b2 ^ n) & ~ b1;
        }
        return b1;
    }
};

```

## C# Solution

```csharp

public class Solution {
    public int SingleNumber(int[] nums) {
        int b1 = 0,b2 = 0;
        foreach (int n in nums){
            b1 = (b1 ^ n) & ~ b2; 
            b2 = (b2 ^ n) & ~ b1;
        }
        return b1;
    }
}

```

## Java Solution

```java

class Solution {
    public int singleNumber(int[] nums) {
        int b1 = 0,b2 = 0;
        for (int n : nums){
            b1 = (b1 ^ n) & ~ b2; 
            b2 = (b2 ^ n) & ~ b1;
        }
        return b1;
    }
}

```

## Python Solution

```python

class Solution:
    def singleNumber(self, nums):
        b1,b2 = 0,0
        for n in nums:
            b1 = (b1 ^ n) & ~ b2 
            b2 = (b2 ^ n) & ~ b1
        return b1

```


