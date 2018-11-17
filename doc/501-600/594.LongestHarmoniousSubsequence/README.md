
# problem 594 : LongestHarmoniousSubsequence

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/501-600/594.LongestHarmoniousSubsequence/problem.png"/>

## C++ Solution

```c++

static int pr = []() {
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int, int> hash;
        int count = 0;
        for (auto num : nums)      
            hash[num]++;  
        for (auto v : hash)
            if (hash.find(v.first - 1) != hash.end()) 
                count = max(count, hash[v.first - 1] + hash[v.first]);
        return count;
    }
};

```

## C# Solution

```csharp

public class Solution
{
    public int FindLHS(int[] nums)
    {
        if (nums == null || nums.Length == 0 || nums.Length == 1)
        {
            return 0;
        }
        Array.Sort(nums);
        int max = 0, temp = nums[0], begin = 0, index = 0;
        bool isStart = true;
        for (int i = 1; i <= nums.Length; i++)
        {
            if (i == nums.Length || nums[i] != temp)
            {
                if (!isStart)
                {
                    max = max > (i - begin) ? max : (i - begin);
                    begin = index;
                }
                if (i == nums.Length) break;
                if (nums[i] - temp == 1)
                {
                    isStart = false;
                }
                else
                {
                    isStart = true;
                    begin = i;
                }
                temp = nums[i];
                index = i;
            }
        }
        return max;
    }
}

```

## Java Solution

```java

class Solution {
    public int findLHS(int[] nums) {
        int count = 0;
        HashMap<Integer, Integer> hash = new HashMap<>();
        for (int num : nums) {
            int val = hash.getOrDefault(num, 0);
            hash.put(num, val + 1);
        }
        for (Integer v : hash.keySet()) {
            if (hash.containsKey(v - 1) && hash.getOrDefault(v, 0) + hash.getOrDefault(v - 1, 0) > count) {
                count = hash.getOrDefault(v, 0) + hash.getOrDefault(v - 1, 0);
            }
        }
        return count;
    }
}

```

## Python Solution

```python


from collections import Counter

class Solution:
    def findLHS(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        count = 0
        d = Counter(nums)
        for v in d.keys():
            if v - 1 in d.keys() and d[v] + d[v - 1] > count:
                count = d[v] + d[v - 1]
        return count

```





