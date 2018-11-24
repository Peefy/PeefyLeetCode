
# problem 645 : SetMismatch

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/601-700/645.SetMismatch/problem.png"/>

## C++ Solution

```c++

static int x = []() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution{
  public:
    vector<int> findErrorNums(vector<int> &nums){
        vector<int> ans(2);
        auto n = nums.size();
        auto map = new bool[n + 1];
        memset(map, false, sizeof(bool) * (n + 1));
        for (int i = 0; i < n; i++)
        {
            if (map[nums[i]] == false)
                map[nums[i]] = true;
            else{
                ans[0] = nums[i];
            }           
        }
        for (int i = 1; i < (n + 1); i++){
            if (map[i] == false)
            {
                ans[1] = i;
                break;
            }
        }
        return ans;
    }
};

```

## C# Solution

```csharp

public class Solution 
{
    public int[] FindErrorNums(int[] nums) 
    {
        int[] ans = new int[2];
        var n = nums.Length;
        var map = new bool[n + 1];
        for (int i = 0; i < n; i++)
        {
            if (map[nums[i]] == false)
                map[nums[i]] = true;
            else{
                ans[0] = nums[i];
            }           
        }
        for (int i = 1; i < (n + 1); i++){
            if (map[i] == false)
            {
                ans[1] = i;
                break;
            }
        }
        return ans;
    }
}

```

## Java Solution

```java

class Solution {
    public int[] findErrorNums(int[] nums) {
        HashSet<Integer> hash = new HashSet<>();
        int n = nums.length;
        int total = n * (n + 1) / 2;
        int sum = 0;
        int sumset = 0;
        for (int i = 0; i < n; i++) {
            sum += nums[i];
            if (hash.contains(nums[i]) == false){
                hash.add(nums[i]);
                sumset += nums[i];
            }
        }
        return new int[]{sum - sumset,  total - sumset};
    }
}

```

## Python Solution

```python


from collections import Counter

class Solution:
    def findErrorNums(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        counter = Counter(nums)
        ele1, ele2, n = 0, 0, len(nums)
        for k in counter.keys():
            if counter[k] > 1:
                ele1 = k
                break
        ele2 = int((n + 1) * n / 2 - sum(counter.keys()))
        return [ele1, ele2]

```





