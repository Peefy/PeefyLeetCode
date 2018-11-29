
# problem 674 : LongestContinuousIncreasingSubsequence

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/601-700/674.LongestContinuousIncreasingSubsequence/problem.png"/>

## C++ Solution

```c++

static int x = []() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int count = 0;
        int maxcount = 0;
        int last = -9999999;
        for (int num : nums){
            if (num > last)
                count += 1;
            else
                count = 1;
            if (count > maxcount)
                maxcount = count;
            last = num;
        }
        return maxcount; 
    }
};

```

## C# Solution

```csharp

public class Solution {
    public int FindLengthOfLCIS(int[] nums) {
        int count = 0;
        int maxcount = 0;
        int last = -9999999;
        foreach (var num in nums){
            if (num > last)
                count += 1;
            else
                count = 1;
            if (count > maxcount)
                maxcount = count;
            last = num;
        }
        return maxcount; 
    }
}

```

## Java Solution

```java

class Solution {
    public int findLengthOfLCIS(int[] nums) {
        int count = 0;
        int maxcount = 0;
        int last = -9999999;
        for (int num : nums){
            if (num > last)
                count += 1;
            else
                count = 1;
            if (count > maxcount)
                maxcount = count;
            last = num;
        }
        return maxcount; 
    }
}

```

## Python Solution

```python

class Solution:
    def findLengthOfLCIS(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        count = 0
        maxcount = 0
        last = -9999999
        for num in nums:
            if num > last:
                count += 1
            else:
                count = 1
            maxcount = max(maxcount, count)
            last = num
        return maxcount 

```





