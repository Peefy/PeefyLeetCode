
# Problem 33 : SearchInRotatedSortedArray

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/1-100/33.SearchInRotatedSortedArray/problem.png"/>

## C++ Solution

```c++

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int length = nums.size();
        if (length == 0)
            return -1;
        int begin = 0;
        int end = length - 1;
        while (end > begin){
            if (end == begin + 1)
                break;
            int mid = (begin + end) / 2;
            if (nums[mid] > nums[begin])
                begin = mid;
            else
                end = mid;
        }
        if (nums[0] <= target && nums[begin] >= target){
            end = begin;
            begin = 0;
        }
        else if (nums[end] <= target && nums[-1] >= target){
            begin = end;
            end = length-1;
        }
        else
            return -1;
        while (begin <= end){
            int mid = (begin + end) >> 1;
            if (nums[mid] == target)
                return mid;
            else if (nums[mid] > target)
                end = mid - 1;
            else
                begin = mid + 1;
        }
        return -1;
    }
};

```

## C# Solution

```csharp

public class Solution {
    public int Search(int[] nums, int target) {
        int length = nums.Length;
        if (length == 0)
            return -1;
        int begin = 0;
        int end = length - 1;
        while (end > begin){
            if (end == begin + 1)
                break;
            int mid = (begin + end) / 2;
            if (nums[mid] > nums[begin])
                begin = mid;
            else
                end = mid;
        }
        if (nums[0] <= target && nums[begin] >= target){
            end = begin;
            begin = 0;
        }
        else if (nums[end] <= target && nums[length-1] >= target){
            begin = end;
            end = length-1;
        }
        else
            return -1;
        while (begin <= end){
            int mid = (begin + end) >> 1;
            if (nums[mid] == target)
                return mid;
            else if (nums[mid] > target)
                end = mid - 1;
            else
                begin = mid + 1;
        }
        return -1;
    }
}

```

## Java Solution

```java

class Solution {
    public int search(int[] nums, int target) {
        int length = nums.length;
        if (length == 0)
            return -1;
        int begin = 0;
        int end = length - 1;
        while (end > begin){
            if (end == begin + 1)
                break;
            int mid = (begin + end) / 2;
            if (nums[mid] > nums[begin])
                begin = mid;
            else
                end = mid;
        }
        if (nums[0] <= target && nums[begin] >= target){
            end = begin;
            begin = 0;
        }
        else if (nums[end] <= target && nums[length-1] >= target){
            begin = end;
            end = length-1;
        }
        else
            return -1;
        while (begin <= end){
            int mid = (begin + end) >> 1;
            if (nums[mid] == target)
                return mid;
            else if (nums[mid] > target)
                end = mid - 1;
            else
                begin = mid + 1;
        }
        return -1;
    }
}

```

## Python Solution

```python

class Solution:
    def search(self, nums: 'List[int]', target: 'int') -> 'int':
        rotateindex = 0
        n = len(nums)
        for i in range(n - 1):
            if nums[i] > nums[i + 1]:
                rotateindex = i + 1
                break
        left = 0
        right = n - 1
        while left <= right:
            middle = left + (right - left) // 2
            realindex = middle + rotateindex
            if realindex >= n:
                realindex -= n
            if nums[realindex] == target:
                return realindex
            elif nums[realindex] < target:
                left = middle + 1
            else:
                right = middle - 1
        return -1

```


