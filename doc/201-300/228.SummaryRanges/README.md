
# problem 228 : SummaryRanges

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/201-300/228.SummaryRanges/problem.png"/>

## C++ Solution

```c++

class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> summary;
        for (int i = 0, j = 0; j < nums.size(); ++j) {
            if (j + 1 < nums.size() && nums[j + 1] == nums[j] + 1)
                continue;
            if (i == j)
                summary.push_back(to_string(nums[i]) + "");
            else
                summary.push_back(to_string(nums[i]) + "->" + to_string(nums[j]));
            i = j + 1;
        }
        return summary;
    }
};

```

## C# Solution

```csharp

public class Solution {
    public IList<string> SummaryRanges(int[] nums) {
        List<string> summary = new List<string>();
        for (int i = 0, j = 0; j < nums.Length; ++j) {
            if (j + 1 < nums.Length && nums[j + 1] == nums[j] + 1)
                continue;
            if (i == j)
                summary.Add(nums[i] + "");
            else
                summary.Add(nums[i] + "->" + nums[j]);
            i = j + 1;
        }
        return summary;
    }
}

```

## Java Solution

```java

class Solution {
    public List<String> summaryRanges(int[] nums) {
        List<String> summary = new ArrayList<>();
        for (int i = 0, j = 0; j < nums.length; ++j) {
            if (j + 1 < nums.length && nums[j + 1] == nums[j] + 1)
                continue;
            if (i == j)
                summary.add(nums[i] + "");
            else
                summary.add(nums[i] + "->" + nums[j]);
            i = j + 1;
        }
        return summary;
    }
}

```

## Python Solution

```python

class Solution:
    def summaryRanges(self, nums):
        summary = []
        i = 0
        for j in range(len(nums)):
            if j + 1 < len(nums) and nums[j + 1] == nums[j] + 1:
                continue
            if i == j:
                summary.append(str(nums[i]))
            else:
                summary.append(str(nums[i]) + '->' + str(nums[j]))
            i = j + 1
        return summary     

```




