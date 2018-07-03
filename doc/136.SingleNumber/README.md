
# problem 136 : SingleNumber

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/136.SingleNumber/problem.png"/>

空间复杂度无,时间复杂度O(n)的完美解答参照C#代码

## C++ Solution

```c++
class Solution
{
  public:
    int singleNumber(vector<int> &nums)
    {
        auto beforesum = 0;
        
        for(auto i = nums.begin(); i != nums.end(); i++)
        {
            beforesum += *i;
        }  
        set<int> c;
        for (auto i = nums.begin(); i != nums.end(); i++)
        {
            c.insert(*i);
        }
        auto aftersum = 0;
        for (auto i = c.begin(); i != c.end(); i++)
        {
            aftersum += *i;
        }
        return aftersum * 2 - beforesum;
    }
};

```

## C# Solution

```csharp
    public class Solution
    {
        public int SingleNumber(int[] nums)
        {
            for (var i = 1; i < nums.Length; ++i)
            {
                nums[0] ^= nums[i];
            }
            return nums[0];
        }
    }

```

## Java Solution

```java
class Solution {
    public int singleNumber(int[] nums) {
        int result = 0;
        for(int i = 0;i < nums.length;++i){
            result ^= nums[i];
        }
        return result;
    }
}

```

## Python Solution

```python
class Solution:
    def singleNumber(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        nums.sort()
        n = len(nums)
        i = 0
        while i < n - 1:
            if nums[i] != nums[i + 1]:
                return nums[i]
            i += 2
        return nums[n - 1]

```


