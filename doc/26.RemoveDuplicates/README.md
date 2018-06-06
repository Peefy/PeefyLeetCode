
# problem 26 : Remove Duplicates

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/26.RemoveDuplicates/problem.png"/>

## C++ Solution

```c++

class Solution
{
  public:
    int removeDuplicates(vector<int> &nums)
    {
        auto n = nums.size();
        if (n > 0){
            auto last = nums[0];
            auto index = 1;
            for (auto i = 1; i < n; ++i){
                auto now = nums[i];
                if (now != last){
                    nums[index++] = now;
                    last = now;
                }
            }
            return index;
        }
        return 0;
    }
};

```

## C# Solution

```csharp

    public class Solution
    {
        public int RemoveDuplicates(int[] nums)
        {
            var size = nums.Length;
            if (size == 0)
            {
                return 0;
            }
            int first = 1, second = 1;
            int tmp = nums[0];
            while (second < size)
            {
                if (nums[second] != tmp)
                {
                    tmp = nums[second];
                    nums[first] = tmp;
                    first++;
                }
                second++;
            }
            return first;
        }
    }

```

## Java Solution

```java

public class Solution {
    public int removeDuplicates(int[] nums) {
        int n = nums.length;
        int last = -222222222;
        int index = 0;
        for(int i = 0; i < n; ++i){
            if (nums[i]!= last){
                nums[index++] = nums[i];
            }
            last = nums[i];
        }
        return index;
    }
}

```

## Python Solution

```python

class Solution:
    def removeDuplicates(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        m = list(set(nums))
        m.sort()
        for i in range(len(m)):
            nums[i] = m[i]
        return len(m)

```


