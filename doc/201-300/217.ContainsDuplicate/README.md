
# problem 217 : ContainsDuplicate

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/201-300/217.ContainsDuplicate/problem.png"/>

## C++ Solution

```c++

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> s;
        int n = nums.size();    
        for(int i = 0; i < n; i++)
        {
            if (s.find(nums[i]) != s.end()) {
                return true;
            } else {
                s.insert(nums[i]);
            }
        }
        return false;
    }
};

```

## C# Solution

```csharp

    public class Solution {
        public bool ContainsDuplicate (int[] nums) {
            HashSet<int> s = new HashSet<int> ();
            var n = nums.Length;
            for (int i = 0; i < n; i++) {
                if (s.Contains (nums[i]) == true) {
                    return true;
                } else {
                    s.Add (nums[i]);
                }
            }
            return false;
        }
    }

```

## Java Solution

```java

class Solution {
    public boolean containsDuplicate(int[] nums) {
        HashSet<Integer> s = new HashSet<>();
        int n = nums.length;
        for (int i = 0; i < n; i++) {
            if (s.contains(nums[i]) == true) {
                return true;
            } else {
                s.add(nums[i]);
            }
        }
        return false;
    }
}

```

## Python Solution

```python

class Solution:
    def containsDuplicate(self, nums):
        """
        :type nums: List[int]
        :rtype: bool
        """
        n = len(nums)
        if n == 0:
            return False
        s = {nums[0]}
        for i in range(1, n):
            if nums[i] in s:
                return True
            else:
                s.add(nums[i])
        return False

```




