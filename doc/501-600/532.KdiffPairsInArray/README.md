
# problem 532 : KdiffPairsInArray

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/501-600/532.KdiffPairsInArray/problem.png"/>

## C++ Solution

```c++

class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        int n=nums.size();
        if(n<2)
            return 0;
        if(k<0)
            return 0;
        sort(nums.begin(),nums.end());
        int res=0;
        vector<int>::iterator it;
        for(int i=0;i<=n-2;++i) {
            int t=nums[i]+k;
            it=lower_bound(nums.begin()+i+1,nums.end(),t);
            if(it!=nums.end() && *it==t)
                ++res;
            t=nums[i];
            while(i+1<=n-1 && nums[i+1]==t)
                ++i;
        }
        return res;
    }
};

```

## C# Solution

```csharp

public class Solution {
    public int FindPairs(int[] nums, int k) {
        int count = 0;
        if(k < 0)
            return count;
        var hm = new Dictionary<int, int>();
        for(int i = 0; i < nums.Length; i++){
            hm.Add(nums[i],i);
        }
        for(int i = 0; i < nums.Length; i++){
            if(hm.ContainsKey(nums[i] + k) && hm[nums[i]+k] != i){
                count++;
                hm.Remove(nums[i] + k);
            }
        }
        return count;
    }
}

```

## Java Solution

```java

class Solution {
    public int findPairs(int[] nums, int k) {
        int count = 0;
        if(k < 0)
            return count;
        HashMap<Integer,Integer> hm = new HashMap<>();
        for(int i = 0; i < nums.length; i++){
            hm.put(nums[i],i);
        }
        for(int i = 0; i < nums.length; i++){
            if(hm.containsKey(nums[i] + k) && hm.get(nums[i]+k) != i){
                count++;
                hm.remove(nums[i] + k);
            }
        }
        return count;
    }
}

```

## Python Solution

```python

class Solution:
    def findPairs(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: int
        """
        if k < 0:
            return 0
        count = 0
        n = len(nums)
        d = {}
        for i in range(n):
            d[nums[i]] = i
        for i in range(n):
            if nums[i] + k in d.keys() and d[nums[i] + k] != i:
                count += 1
                d.pop(nums[i] + k, 0)
        return count

```





