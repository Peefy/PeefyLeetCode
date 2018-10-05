
# problem 448 : FindDisappearedNumbers

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/401-500/448.FindDisappearedNumbers/problem.png"/>

C# 代码为标准答案

## C++ Solution

```c++

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> r;
        int n = nums.size();
        int* flag = (int *)malloc(sizeof(int) * n);
        memset(flag, 0, sizeof(int) * n);
        for(int i = 0; i < n; i++)
        {
            *(flag + nums[i] - 1) = 1;
        }
        for(int i = 1; i < n + 1; i++)
        {
            if (*(flag + i - 1) != 1)
                r.push_back(i);
        }
        return r;
    }
};

```

## C# Solution

```csharp

public class Solution {
    public IList<int> FindDisappearedNumbers(int[] nums) {
        var res = new List<int>();
        for (int i = 0; i < nums.Length; ++i) {
            while (nums[i] != (i+1) && nums[i] != nums[nums[i] - 1])
		    {
		        //	swap(nums[i], nums[nums[i] - 1]);
                int tmp = nums[i];
			    nums[i] = nums[nums[i] - 1];
			    nums[tmp - 1] = tmp;
		    }
        }
        for (int i = 0; i < nums.Length; ++i) {
            if (nums[i] != i + 1) {
                res.Add(i + 1);
            }
        }
        return res;
    }
}

```

## Java Solution

```java

class Solution {
    public List<Integer> findDisappearedNumbers(int[] nums) {
        int n = nums.length;
        HashSet<Integer> hash = new HashSet<>();
        ArrayList<Integer> r = new ArrayList<>();
        for (int i = 0; i < n; i++) {
            hash.add(nums[i]);
        }
        for (int i = 1; i < n + 1; i++) {
            if (hash.contains(i) == false) {
                r.add(i);
            }
        }
        return r;
    }
}

```

## Python Solution

```python

class Solution:
    def findDisappearedNumbers(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        return list(set(range(1, len(nums) + 1)) - set(nums))

```





