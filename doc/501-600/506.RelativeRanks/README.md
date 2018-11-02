
# problem 506 : RelativeRanks

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/501-600/506.RelativeRanks/problem.png"/>

## C++ Solution

```c++

class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& nums) {
        auto maxnum = 0;
        for(auto num : nums)
        {
            maxnum = max(maxnum, num);
        }
        vector<int> hash(maxnum + 1); 
        vector<string> r(nums.size()); 
        for (int i = 0; i < nums.size(); i++) {
            hash[nums[i]] = i + 1;
        }
        int place = 1;
        for (int i = maxnum; i >= 0; i--) {
            if (hash[i] != 0) {
                if (place == 1) {
                    r[hash[i] - 1] = "Gold Medal";
                } else if (place == 2) {
                    r[hash[i] - 1] = "Silver Medal";
                } else if (place == 3) {
                    r[hash[i] - 1] = "Bronze Medal";
                } else {
                    r[hash[i] - 1] = to_string(place);
                }
                place++;
            }
        }
        return r;
    }
};

```

## C# Solution

```csharp

public class Solution {
    public string[] FindRelativeRanks(int[] nums) {
        var max = 0;
        foreach(var num in nums)
        {
            if(num > max)
                max = num;
        }
        int[] hash = new int[max + 1];
        string[] r = new string[nums.Length]; 
        for (int i = 0; i < nums.Length; i++) {
            hash[nums[i]] = i + 1;
        }
        int place = 1;
        for (int i = max; i >= 0; i--) {
            if (hash[i] != 0) {
                if (place == 1) {
                    r[hash[i] - 1] = "Gold Medal";
                } else if (place == 2) {
                    r[hash[i] - 1] = "Silver Medal";
                } else if (place == 3) {
                    r[hash[i] - 1] = "Bronze Medal";
                } else {
                    r[hash[i] - 1] = place.ToString();
                }
                place++;
            }
        }
        return r;
    }
}

```

## Java Solution

```java

class Solution {
    public String[] findRelativeRanks(int[] nums) {
        HashMap<Integer, String> hash = new HashMap<>();
        int n = nums.length;
        int[] oldnums = Arrays.copyOf(nums, n);
        String[] r = new String[n];
        Arrays.sort(nums);
        String[] medals = {"Gold Medal", "Silver Medal", "Bronze Medal"};
        for (int i = 0; i < n; ++i) {
            int j = n - i - 1;
            if (i <= 2)
                hash.put(nums[j], medals[i]);
            else
                hash.put(nums[j], String.valueOf(i + 1));
        }
        for (int i = 0; i < n; i++) {
            r[i] = hash.get(oldnums[i]);
        }
        return r;
    }
}

```

## Python Solution

```python

class Solution:
    def findRelativeRanks(self, nums):
        """
        :type nums: List[int]
        :rtype: List[str]
        """
        n = len(nums)
        r = [""] * n
        medals = ["Gold Medal", "Silver Medal", "Bronze Medal"]
        sort_nums = sorted(nums, reverse=True)
        for i in range(len(sort_nums)):
            r[nums.index(sort_nums[i])] = str(i + 1) if i > 2 else medals[i]
        return r

```





