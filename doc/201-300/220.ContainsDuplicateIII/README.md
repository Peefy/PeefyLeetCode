
# problem 220 : ContainsDuplicateIII

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/201-300/220.ContainsDuplicateIII/problem.png"/>

## C++ Solution

```c++

class Solution {
public:

    bool containsNearbyAlmostDuplicate(vector<int>& nums, int k, int t) 
    {
	    set<double> _set;
	    for (int i = 0; i < nums.size(); ++i) 
	    {
		    auto s = _set.lower_bound((double)nums[i] - (double)t);
		    if (s != _set.end() && *s <= (double)nums[i] + (double)t) return true;

		    _set.insert(nums[i]);
		    if (_set.size() > k) _set.erase(nums[i - k]);
	    }
	    return false;
    }
};

```

## C# Solution

```csharp

public class Solution {
    public bool ContainsNearbyAlmostDuplicate(int[] nums, int k, int t) {
        if (t < 0)
            return false;
        var n = nums.Length;
        var d = new Dictionary<long, long>();
        var w = t + 1;
        for (int i = 0; i < n; i++)
        {
            var m = nums[i] / w;
            if (d.ContainsKey(m) == true)
                return true;
            if (d.ContainsKey(m - 1) && Math.Abs(nums[i] - d[m - 1]) < w)
                return true;
            if (d.ContainsKey(m + 1) && Math.Abs(nums[i] - d[m + 1]) < w)
                return true;
            d.Add(m, nums[i]);
            if (i >= k)
                d.Remove(nums[i - k] / w);
        }
        return false;
    }
}

```

## Java Solution

```java

class Solution {
    public boolean containsNearbyAlmostDuplicate(int[] nums, int k, int t) {
        TreeSet<Integer> set = new TreeSet<>();
        for (int i = 0; i < nums.length; i++) {
            Integer s = set.ceiling(nums[i]);
            if (s != null && s <= nums[i] + t)
                return true;
            Integer g = set.floor(nums[i]);
            if (g != null && nums[i] <= g + t)
                return true;
            set.add(nums[i]);
            if (set.size() > k){
                set.remove(nums[i - k]);
            }
        }
        return false;
    }
}

```

## Python Solution

```python

class Solution:
    def containsNearbyAlmostDuplicate(self, nums, k, t):
        if t < 0:
            return False
        n = len(nums)
        d = {}
        w = t + 1
        for i in range(n):
            m = nums[i] // w
            if m in d:
                return True
            if m - 1 in d and abs(nums[i] - d[m - 1]) < w:
                return True
            if m + 1 in d and  abs(nums[i] - d[m + 1]) < w:
                return True
            d[m] = nums[i]
            if i >= k:
                del d[nums[i - k] // w]
        return False     

```




