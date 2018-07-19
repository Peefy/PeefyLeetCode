
# problem 219 : ContainsNearbyDuplicate

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/201-300/219.ContainsNearbyDuplicate/problem.png"/>

## C++ Solution

```c++

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        map<int, int> m;
        int n = nums.size();
        for(int i = 0; i < n; i++)
        {
            if(m.find(nums[i]) != m.end() && i - m[nums[i]] <= k)
                return true;
            else
                m[nums[i]] = i;
        }
        return false;
    }
};

```

## C# Solution

```csharp

    public class Solution
    {
        public bool ContainsNearbyDuplicate(int[] nums, int k)
        {
            Dictionary<int, int> d = new Dictionary<int, int>();
            var n = nums.Length;
            for (int i = 0; i < n; i++)
            {
                if (d.ContainsKey(nums[i]))
                {
                    if(i - d[nums[i]] <= k)
                        return true;
                    else
                        d[nums[i]] = i;
                }
                else
                {
                    d.Add(nums[i], i);
                }
            }
            return false;
        }
    }

```

## Java Solution

```java

class Solution {
    public boolean containsNearbyDuplicate(int[] nums, int k) {
        HashMap<Integer, Integer> d = new HashMap<>();
        int n = nums.length;
        for (int i = 0; i < n; i++) {
            if (d.containsKey(nums[i]) && i - d.get(nums[i]) <= k) {
                return true;
            } else {
                d.put(nums[i], i);
            }
        }
        return false;
    }
}

```

## Python Solution

```python

class Solution:
    def containsNearbyDuplicate(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: bool
        """
        d = {}
        n = len(nums)
        for i in range(n):
            if nums[i] in d.keys():
                if i - d[nums[i]] <= k:
                    return True
                else:
                    d[nums[i]] = i
            else:
                d[nums[i]] = i          
        return False

```




