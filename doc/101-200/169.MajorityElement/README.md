
# problem 169 : MajorityElement

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/101-200/169.MajorityElement/problem.png"/>

## C++ Solution

```c++

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int result = nums[0], count = 0;
        for (int i = 0;i < nums.size();++i) {
            int num = nums[i];
            if (count == 0) {
                result = num;
                count++;
            } 
            else {
                if (result == num) {
                    count++;
                } 
                else {
                    count--;
                }
            }
        }
        return result;
    } 
};

```

## C# Solution

```csharp
    public class Solution {
        public int MajorityElement (int[] nums) {
            Array.Sort(nums);
            return nums[nums.Length / 2];
        }
    }
```

## Java Solution

```java

class Solution {
    public int majorityElement(int[] nums) {
        HashMap<Integer, Integer> m = new HashMap<>();
        int n = nums.length;
        for (int i = 0; i < n; i++) {
            if (m.containsKey(nums[i]) == false) {
                m.put(nums[i], 1);
            }
            else{
                int val = m.get(nums[i]);
                m.remove(nums[i]);
                m.put(nums[i], val + 1);
            }
        }
        Collection<Integer> s = m.values();
        int majar = Collections.max(s);
        for (Map.Entry<Integer, Integer> en : m.entrySet()) {
            if (en.getValue() == majar) {
                return en.getKey();
            }
        }
        return -1;
    }
}

```

## Python Solution

```python

class Solution:
    def majorityElement(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        n = len(nums)
        if n <= 2:
            return nums[0]
        d = {}
        for i in range(n):
            if nums[i] not in d.keys():
                d[nums[i]] = 1
            else:
                val = d[nums[i]]
                d[nums[i]] = val + 1
        majar = max(d.values())
        for (u, v) in d.items():
            if v == majar:
                return u

```


