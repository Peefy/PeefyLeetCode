
# problem 260 : SingleNumberIII

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/201-300/260.SingleNumberIII/problem.png"/>

## C++ Solution

```c++

class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int sign = 0;
        //取得数组中两个唯一数的按位异或结果
        for (int i = 0; i < nums.size(); i++)
        {
            sign ^= nums[i];
        }
        //获取区分两个唯一数的比特位所代表的值
        //也可以写成：sign &= (~sign) + 1
        sign &= -sign;
        int n1 = 0, n2 = 0;
        //通过标识，区分两个数组
        for (int i = 0; i < nums.size(); i++)
        {
            if ((nums[i] & sign) == sign)
                n1 ^= nums[i];
            else
                n2 ^= nums[i]; ;
        }
        return { n1,n2 };
    }
};

```

## C# Solution

```csharp

    public class Solution
    {
        public int[] SingleNumber(int[] nums)
        {
            int sign = 0;
            for (int i = 0; i < nums.Length; i++)
            {
                sign ^= nums[i];
            }
            sign &= -sign;
            int[] result = new int[2];
            for (int i = 0; i < nums.Length; i++)
            {
                if ((nums[i] & sign) == sign)
                    result[0] ^= nums[i];
                else
                    result[1] ^= nums[i]; ;
            }
            return result;
        }
    }

```

## Java Solution

```java

public class Solution {
    public int[] singleNumber(int[] nums) {
        int sign = 0;
        for (int i = 0; i < nums.length; i++) {
            sign ^= nums[i];
        }
        sign &= -sign;
        int[] result = new int[2];
        for (int i = 0; i < nums.length; i++) {
            if ((nums[i] & sign) == sign)
                result[0] ^= nums[i];
            else
                result[1] ^= nums[i];
            ;
        }
        return result;
    }
}

```

## Python Solution

```python

class Solution:
    def singleNumber(self, nums):
        sign = 0
        for num in nums:
            sign = sign ^ num
        sign &= -sign
        re = [0] * 2
        for num in nums:
            if num & sign == sign:
                re[0] ^= num
            else:
                re[1] ^= num
        return re     

```




