
# problem 259 : ThreeSumSmaller

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/201-300/259.ThreeSumSmaller/problem.png"/>

## C++ Solution

```c++

class Solution {
public:
    int threeSumSmaller(vector<int> nums, int target) {
        sort(nums.begin(), nums.end());
        int count = 0;
        for (int i = 0; i < nums.size() - 2; i++) {
            int j = i + 1, k = nums.size() - 1;
            while (j < k) {
                if (nums[i] + nums[j] + nums[k] < target) {
                    count += k - j;
                    j++;
                } else {
                    k--;
                }
            }
        }
        return count;
    }
};

```

## C# Solution

```csharp

    public class Solution
    {
        public int ThreeSumSmaller(int[] nums, int target)
        {
            Array.Sort(nums);
            int count = 0;
            for (int i = 0; i < nums.Length - 2; i++)
            {
                int j = i + 1, k = nums.Length - 1;
                while (j < k)
                {
                    if (nums[i] + nums[j] + nums[k] < target)
                    {
                        count += k - j;
                        j++;
                    }
                    else
                    {
                        k--;
                    }
                }
            }
            return count;
        }
    }

```

## Java Solution

```java

public class Solution {
    public int threeSumSmaller(int[] nums, int target) {
        Arrays.sort(nums);
        int count = 0;
        for (int i = 0; i < nums.length - 2; i++) {
            int j = i + 1, k = nums.length - 1;
            while (j < k) {
                if (nums[i] + nums[j] + nums[k] < target) {
                    count += k - j;
                    j++;
                } else {
                    k--;
                }
            }
        }
        return count;
    }
}

```

## Python Solution

```python

class Solution:
    def threeSumSmaller(self, nums, target):
        nums.sort()
        count = 0
        for i in range(len(nums) - 2):
            j = i + 1
            k = len(nums) - 1
            while j < k:
                if nums[i] + nums[j] + nums[k] < target:
                    count += k - j
                    j += 1
                else:
                    k -= 1
        return count     

```




