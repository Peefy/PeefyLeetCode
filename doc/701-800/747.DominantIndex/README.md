
# problem 747 : DominantIndex

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/701-800/747.DominantIndex/problem.png"/>

## C++ Solution

```c++

static int pr = []() {
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int maxnum = -1;
        int secondmaxnum = -1;
        int maxindex = 0;
        for (int i = 0; i < nums.size(); i++) {
            int num = nums[i];
            if (num > maxnum){
                secondmaxnum = maxnum;
                maxnum = num;
                maxindex = i;
            }
            else if (num > secondmaxnum)
                secondmaxnum = num;
        }
        return maxnum >= 2 * secondmaxnum ? maxindex : -1;
    }
};

```

## C# Solution

```csharp

public class Solution {
    public int DominantIndex(int[] nums) {
        int maxnum = -1;
        int secondmaxnum = -1;
        int maxindex = 0;
        for (int i = 0; i < nums.Length; i++) {
            int num = nums[i];
            if (num > maxnum){
                secondmaxnum = maxnum;
                maxnum = num;
                maxindex = i;
            }
            else if (num > secondmaxnum)
                secondmaxnum = num;
        }
        return maxnum >= 2 * secondmaxnum ? maxindex : -1;
    }
}

```

## Java Solution

```java

class Solution {
    public int dominantIndex(int[] nums) {
        int maxnum = -1;
        int secondmaxnum = -1;
        int maxindex = 0;
        for (int i = 0; i < nums.length; i++) {
            int num = nums[i];
            if (num > maxnum){
                secondmaxnum = maxnum;
                maxnum = num;
                maxindex = i;
            }
            else if (num > secondmaxnum)
                secondmaxnum = num;
        }
        return maxnum >= 2 * secondmaxnum ? maxindex : -1;
    }
}

```

## Python Solution

```python

class Solution:
    def dominantIndex(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        maxnum = -1
        secondmaxnum = -1
        maxindex = 0
        for i, num in enumerate(nums):
            if num > maxnum:
                secondmaxnum = maxnum
                maxnum = num
                maxindex = i
            elif num > secondmaxnum:
                secondmaxnum = num
        return maxindex if maxnum >= 2 * secondmaxnum else -1

```





