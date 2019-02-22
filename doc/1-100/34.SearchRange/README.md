
# Problem 34 : SearchRange

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/1-100/34.SearchRange/problem.png"/>

## C++ Solution

```c++

static int x = []() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int lo = 0;
        int hi = nums.size();
        while(lo < hi){
            int mid = (lo + hi) >> 1;
            if (target > nums[mid])
                lo = mid + 1;
            else
                hi = mid;
        }
        if (lo == nums.size() || nums[lo] != target)
            return vector<int>{-1, -1};
        int left = lo;
        lo = 0;
        hi = nums.size();
        while(lo < hi){
            int mid = (lo + hi) >> 1;
            if (target > nums[mid] || target == nums[mid])
                lo = mid + 1;
            else
                hi = mid;
        }
        return vector<int>{left, lo - 1};
    }
};

```

## C# Solution

```csharp

public class Solution {
    public int[] SearchRange(int[] nums, int target) {
        int lo = 0;
        int hi = nums.Length;
        while(lo < hi){
            int mid = (lo + hi) >> 1;
            if (target > nums[mid])
                lo = mid + 1;
            else
                hi = mid;
        }
        if (lo == nums.Length || nums[lo] != target)
            return new int[]{-1, -1};
        int left = lo;
        lo = 0;
        hi = nums.Length;
        while(lo < hi){
            int mid = (lo + hi) >> 1;
            if (target > nums[mid] || target == nums[mid])
                lo = mid + 1;
            else
                hi = mid;
        }
        return new int[]{left, lo - 1};
    }
}

```

## Java Solution

```java

class Solution {
    public int[] searchRange(int[] nums, int target) {
        int[] res = new int[]{-1,-1};
        if(nums.length == 0) return res;
        for(int i=0;i<nums.length;i++){
            if(target == nums[i]){
                res[0] = i;
                break;
            }
        }
        for(int i=nums.length-1;i>=0;i--){
            if(target == nums[i]){
                res[1] = i;
                break;
            } 
        }
        return res;
    }
}

```

## Python Solution

```python

class Solution:
    def searchRange(self, nums: 'List[int]', target: 'int') -> 'List[int]':
        left = 0
        right = len(nums) - 1
        ans = [-1, -1]
        while left <= right:
            middle = (left + right) >> 1
            if nums[middle] == target:
                ans = [middle, middle]
                while ans[0] - 1 >= 0 and nums[ans[0] - 1] == target: 
                    ans[0] -= 1
                while ans[1] + 1 < len(nums) and nums[ans[1] + 1] == target:
                    ans[1] += 1
                return ans
            elif nums[middle] < target:
                left = middle + 1
            else:
                right = middle - 1
        return ans

```


