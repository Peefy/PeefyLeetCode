
# problem 163 : MissingRanges

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/101-200/163.MissingRanges/problem.png"/>

## C++ Solution

```c++

class Solution {
public:
    vector<string> findMissingRanges(vector<int>& nums, int lower, int upper) {
        long expected = lower, newUpper = upper;
        vector<string> ret;
        for(int i = 0; i <= nums.size(); i++) {
            if(i < nums.size() && nums[i] < expected) continue;
            long val = (i==nums.size())?newUpper+1:nums[i];
            if(expected != val && expected + 1 == val) {
                ret.push_back(to_string(expected));
            } else if(expected != val){
                ret.push_back(to_string(expected) + "->" + to_string(val-1));
            }
            expected = val+1;
        }
        return ret;
    }
};

```

## C# Solution

```csharp

public class Solution {
List<string> FindMissingRanges(int[] nums, int lower, int upper) {
        long expected = lower, newUpper = upper;
        List<string> ret = new List<string>();
        for(int i = 0; i <= nums.Length; i++) {
            if(i < nums.Length && nums[i] < expected) continue;
            long val = (i==nums.Length)?newUpper+1:nums[i];
            if(expected != val && expected + 1 == val) {
                ret.Add(expected.ToString());
            } else if(expected != val){
                ret.Add(expected.ToString() + "->" + (val-1).ToString());
            }
            expected = val+1;
        }
        return ret;
    }
}

```

## Java Solution

```java

public class Solution {
    List<String> findMissingRanges(int[] nums, int lower, int upper) {
        long expected = lower, newUpper = upper;
        List<String> ret = new LinkedList<>();
        for (int i = 0; i <= nums.length; i++) {
            if (i < nums.length && nums[i] < expected)
                continue;
            long val = (i == nums.length) ? newUpper + 1 : nums[i];
            if (expected != val && expected + 1 == val) {
                ret.add(String.valueOf(expected));
            } else if (expected != val) {
                ret.add(String.valueOf(expected) + "->" + String.valueOf(val - 1));
            }
            expected = val + 1;
        }
        return ret;
    }
}

```

## Python Solution

```python

class Solution:
    def findMissingRanges(self, nums, lower, upper):
        expected = lower
        newUpper = upper
        ret = []
        for i in range(len(nums) + 1):
            if i < len(nums) and nums[i] < expected:
                continue
            val = newUpper + 1 if i == len(nums) else nums[i]
            if expected != val and expected + 1 == val:
                ret.append(str(expected))
            elif expected != val:
                ret.append(str(expected) + '->' + str(val - 1))
            expected = val + 1
        return ret

```


