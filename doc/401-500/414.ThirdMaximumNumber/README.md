
# problem 414 : ThirdMaximumNumber

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/401-500/414.ThirdMaximumNumber/problem.png"/>

## C++ Solution

```c++

class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long longmin = -0xFFFFFFFFF;
        long first = longmin;
		long secend = longmin;
		long third = longmin;
		for (int i = 0; i < nums.size(); i++) {
			long temp = nums[i];
			if (temp >= first) {
				if (temp != first) {
					third = secend;
					secend = first;
					first = temp;
				}
			} else if (temp >= secend) {
				if (temp != secend) {
					third = secend;
					secend = temp;
				}
			} else if (temp >= third) {
				third = temp;
			}
		}
		if (third == longmin)
			return (int) first;
		return (int) third;
    }
};


```

## C# Solution

```csharp


    public int ThirdMax(int[] nums) {
        long first = long.MinValue;
		long secend = long.MinValue;
		long third = long.MinValue;
		for (int i = 0; i < nums.Length; i++) {
			long temp = nums[i];
			if (temp >= first) {
				if (temp != first) {
					third = secend;
					secend = first;
					first = temp;
				}
			} else if (temp >= secend) {
				if (temp != secend) {
					third = secend;
					secend = temp;
				}
			} else if (temp >= third) {
				third = temp;
			}
		}
		if (third == long.MinValue)
			return (int) first;
		return (int) third;
    }

```

## Java Solution

```java

class Solution {
    public int thirdMax(int[] nums) {
        Arrays.sort(nums);
        int n = nums.length;
        int k = 0;
        for (int i = 1; i < n; i++) {
            int j = n - 1 - i;
            if (nums[j] != nums[j + 1])
                ++k;
            if (k == 2)
                return nums[j];
        }
        return nums[n - 1];
    }
}

```

## Python Solution

```python

class Solution:
    def thirdMax(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        nums = sorted(list(set(nums)))
        return max(nums) if len(nums) < 3 else nums[-3]

```





